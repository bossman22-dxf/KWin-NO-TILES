# Maintainer: Bossman22-DXF

pkgname=kwin-no-tiles
pkgver=6.8.1
_dirver=$(echo $pkgver | cut -d. -f1-3)
pkgrel=2.1
pkgdesc='A Wayland compositor edited by Bossman22 (Patched)'
arch=(x86_64)
url='https://kde.org'
license=(LGPL-2.0-or-later)

# Explicitly replaces and satisfies stock KWin at the matching upstream version.
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

source=("https://download.kde.org/stable/plasma/${pkgver}/kwin-${pkgver}.tar.xz"
        disable-native-tiling-6.8.patch)

sha256sums=('f3d725f81061c1ba97fdef8aeb2101a5c5e03c77f11e9a2abaa1dfed4489d3b6'
            '6aae75198b0bd8514981bbdce121675b5d50f10638436e8e58980b2e9056171e')

prepare() {
  patch -d kwin-$pkgver -Np0 -i ../disable-native-tiling-6.8.patch
}

build() {
  cmake -B build -S kwin-$pkgver \
    -DCMAKE_INSTALL_LIBEXECDIR=lib \
    -DBUILD_TESTING=OFF
  cmake --build build
}

package() {
  DESTDIR="$pkgdir" cmake --install build
  setcap CAP_SYS_NICE=+ep "$pkgdir"/usr/bin/kwin_wayland
}
