#=============================================================================
# SPDX-FileCopyrightText: 2015 Aleix Pol Gonzalez <aleixpol@blue-systems.com>
# SPDX-FileCopyrightText: 2023 Alexander Lohnau <alexander.lohnau@gmx.de>
#
# SPDX-License-Identifier: BSD-3-Clause
#=============================================================================

cmake_policy(VERSION 3.16)

include(FindPackageHandleStandardArgs)
include("${ECM_MODULE_DIR}/QtVersionOption.cmake")
include("${ECM_MODULE_DIR}/ECMQueryQt.cmake")

if (QT_MAJOR_VERSION EQUAL "6")
    include(${ECM_MODULE_DIR}/ECMQmlModule.cmake)
    # Get the qmldir file
    _ecm_qmlmodule_uri_to_path(MODULEDIR "QtQuick.Layouts" "1.3")
    set(KDE_QMLDIR "${KDE_INSTALL_FULL_QMLDIR}/${MODULEDIR}")
    find_file(QMLDIR_FILE qmldir ${KDE_QMLDIR} NO_CACHE)
    if (NOT QMLDIR_FILE) # Check the install destination, the QT_PLUGIN_PATH might not be set up correctly at this point
        # Check the Qt installation
        ecm_query_qt(qt_qml_dir QT_INSTALL_QML)
        set(QMLDIR_FILE "${qt_qml_dir}/${MODULEDIR}/qmldir")
        if (NOT EXISTS "${QMLDIR_FILE}")
            message(WARNING "qmldir not found in ${KDE_QMLDIR} or ${QMLDIR_FILE}")
            set(MODULE_NOTFOUND TRUE)
        endif()
    endif()

    if (NOT MODULE_NOTFOUND AND NOT "1.3" STREQUAL "") # Check if we even need to check the version
        find_file(VERSION_FILE kde-qmlmodule.version ${KDE_QMLDIR} NO_CACHE)
        if (VERSION_FILE)
            file(READ "${VERSION_FILE}" FILE_CONTENTS)
            if ("${FILE_CONTENTS}" MATCHES "([0-9]+(\\.[0-9]+)*)")
                if ("${CMAKE_MATCH_1}" VERSION_GREATER_EQUAL "1.3")
                    set(QtQuick.Layouts-QMLModule_FOUND TRUE)
                endif()
                set(QtQuick.Layouts-QMLModule_VERSION "${CMAKE_MATCH_1}")
            endif()
        else()
            file(READ "${QMLDIR_FILE}" FILE_CONTENTS)
            if ("${FILE_CONTENTS}" MATCHES "# KDE-qmldir-Version: ([0-9]+(\\.[0-9]+)*)")
                if ("${CMAKE_MATCH_1}" VERSION_GREATER_EQUAL "1.3")
                    set(QtQuick.Layouts-QMLModule_FOUND TRUE)
                endif()
                set(QtQuick.Layouts-QMLModule_VERSION "${CMAKE_MATCH_1}")
            endif()
        endif()
    elseif(NOT MODULE_NOTFOUND) # if we don't have a specific version and the qmldir file was found, we are all set
        set(QtQuick.Layouts-QMLModule_FOUND TRUE)
    endif()
endif()

# If we haven't checked the version above, use qmlplugindump
if (NOT CMAKE_CROSSCOMPILING AND NOT MODULE_NOTFOUND AND NOT QtQuick.Layouts-QMLModule_FOUND AND (NOT DEFINED QT6_IS_SHARED_LIBS_BUILD OR QT6_IS_SHARED_LIBS_BUILD))
    if (QT_MAJOR_VERSION EQUAL "6")
        find_package(Qt6 COMPONENTS QmlTools REQUIRED)
        get_target_property(QMLPLUGINDUMP_PROGRAM Qt6::qmlplugindump LOCATION)
    else()
        ecm_query_qt(qt_binaries_dir QT_HOST_BINS)
        find_program(QMLPLUGINDUMP_PROGRAM NAMES qmlplugindump HINTS ${qt_binaries_dir})
    endif()

    set(ENV{QML2_IMPORT_PATH} ${KDE_INSTALL_FULL_QMLDIR})
    execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "QtQuick.Layouts" "1.3" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)
    if(ExitCode EQUAL 0)
        set(QtQuick.Layouts-QMLModule_FOUND TRUE)
    else()
        message(STATUS "qmlplugindump failed for QtQuick.Layouts.")
        set(QtQuick.Layouts-QMLModule_FOUND FALSE)
    endif()
endif()

set(QtQuick.Layouts-QMLModule_FOUND ${QtQuick.Layouts-QMLModule_FOUND} PARENT_SCOPE)
set(QtQuick.Layouts-QMLModule_VERSION ${QtQuick.Layouts-QMLModule_VERSION} PARENT_SCOPE)
find_package_handle_standard_args(QtQuick.Layouts-QMLModule
    VERSION_VAR QtQuick.Layouts-QMLModule_VERSION
    REQUIRED_VARS QtQuick.Layouts-QMLModule_FOUND
    HANDLE_COMPONENTS
)
