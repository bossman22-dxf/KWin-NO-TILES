# Maintainer: Felix Yan <felixonmars@archlinux.org>
# Maintainer: Antonio Rojas <arojas@archlinux.org>
# Contributor: Andrea Scarpino <andrea@archlinux.org>
# EDITED BY: Bossman22-DXF

pkgname=kwin-no-tiles
pkgver=6.7.5
_dirver=$(echo $pkgver | cut -d. -f1-3)
pkgrel=3
pkgdesc='A Wayland compositor edited by Bossman22 (Patched)'
arch=(x86_64)
url='https://kde.org'
license=(LGPL-2.0-or-later)

# CRITICAL GUARDS: Tells pacman this explicitly replaces and satisfies stock KWin
provides=("kwin=$pkgver")
conflicts=('kwin')

depends=(aurorae
         breeze
         glibc
         iio-sensor-proxy
         plasma-activities
         kauth
         kcmutils
         kcolorscheme
         kconfig
         kcoreaddons
         kcrash
         kdbusaddons
         kdeclarative
         kdecoration
         kglobalaccel
         kglobalacceld
         kguiaddons
         ki18n
         kidletime
         kirigami
         kitemmodels
         knewstuff
         knighttime
         knotifications
         kpackage
         kquickcharts
         kscreenlocker
         kservice
         ksvg
         kwayland
         kwidgetsaddons
         kwindowsystem
         kxmlgui
         lcms2
         libcanberra
         libdisplay-info
         libdrm
         libei
         libepoxy
         libevdev
         libgcc
         libinput
         libpipewire
         libqaccessibilityclient-qt6
         libstdc++
         libxcb
         libxcvt
         libxkbcommon
         mesa
         milou
         pipewire-session-manager
         libplasma
         qt6-5compat
         qt6-base
         qt6-declarative
         qt6-svg
         qt6-tools
         systemd-libs
         vulkan-icd-loader
         wayland
         xcb-util-keysyms
         xcb-util-wm)
makedepends=(extra-cmake-modules
             kdoctools
             krunner
             plasma-wayland-protocols
             python
             vulkan-headers
             wayland-protocols
             xorg-xwayland)
optdepends=('plasma-keyboard: virtual keyboard')
groups=(plasma)

# REMOVED: '{,.sig}' from the end of the KDE archive download string
source=(https://kde.org
        disable-native-tiling.patch)

# REMOVED: 'SKIP' entry that belonged to the missing signature file
sha256sums=('6baa910b732d93c48c90f9c1cc685cc93d0b8de0cdf138c24192c045bc3a48e2'
            '345e7f3a9a0a5cc553ba41ff2da98042904d7061d4a5b6138c786b5c14cdecf5')

prepare() {
  patch -d kwin-$pkgver -Np0 -i ../disable-native-tiling.patch
}

build() {
  cmake -B build  -S kwin-$pkgver \
    -DCMAKE_INSTALL_LIBEXECDIR=lib \
    -DBUILD_TESTING=OFF
  cmake --build build
}

package() {
  DESTDIR="$pkgdir" cmake --install build
  setcap CAP_SYS_NICE=+ep "$pkgdir"/usr/bin/kwin_wayland
}
