# Maintainer: Felix Yan <felixonmars@archlinux.org>
# Maintainer: Antonio Rojas <arojas@archlinux.org>
# Contributor: Andrea Scarpino <andrea@archlinux.org>

pkgname=kwin
pkgver=6.7.5
_dirver=$(echo $pkgver | cut -d. -f1-3)
pkgrel=3
pkgdesc='An easy to use, but flexible, Wayland compositor'
arch=(x86_64)
url='https://kde.org/plasma-desktop/'
license=(LGPL-2.0-or-later)
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
source=(https://download.kde.org/stable/plasma/$_dirver/$pkgname-$pkgver.tar.xz{,.sig}
        disable-native-tiling.patch)
sha256sums=('6baa910b732d93c48c90f9c1cc685cc93d0b8de0cdf138c24192c045bc3a48e2'
            'SKIP'
            '345e7f3a9a0a5cc553ba41ff2da98042904d7061d4a5b6138c786b5c14cdecf5')
validpgpkeys=('E0A3EB202F8E57528E13E72FD7574483BB57B18D'  # Jonathan Esk-Riddell <jr@jriddell.org>
              '0AAC775BB6437A8D9AF7A3ACFE0784117FBCE11D'  # Bhushan Shah <bshah@kde.org>
              'D07BD8662C56CB291B316EB2F5675605C74E02CF'  # David Edmundson <davidedmundson@kde.org>
              '90A968ACA84537CC27B99EAF2C8DF587A6D4AAC1'  # Nicolas Fella <nicolas.fella@kde.org>
              '1FA881591C26B276D7A5518EEAAF29B42A678C20') # Marco Martin <notmart@gmail.com>

prepare() {
  patch -d $pkgname-$pkgver -Np0 -i ../disable-native-tiling.patch
}

build() {
  cmake -B build  -S $pkgname-$pkgver \
    -DCMAKE_INSTALL_LIBEXECDIR=lib \
    -DBUILD_TESTING=OFF
  cmake --build build
}

package() {
  DESTDIR="$pkgdir" cmake --install build
  setcap CAP_SYS_NICE=+ep "$pkgdir"/usr/bin/kwin_wayland
}
