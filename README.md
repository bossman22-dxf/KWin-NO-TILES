# KWin NOTILES

KWin NOTILES is a small Arch Linux package patch for **KWin 6.7.5** that adds a setting to disable KWin's native tiling hooks while leaving the rest of KWin intact.

The goal is to let another tool, specifically [**PlasmaZones**](https://github.com/fuddlesworth/PlasmaZones), own tiling behavior without KWin also displaying/using its own native tiling zones.

## What this patch changes

This repository tracks the Arch `kwin` `PKGBUILD` plus one patch:

- `disable-native-tiling.patch`

The patch adds a KWin config option:

```ini
[Windows]
NativeTilingEnabled=false
```

It also adds a checkbox in:

```text
System Settings → Window Management → Window Behavior → Advanced
→ Enable built-in window tiling
```

When disabled, the patch blocks KWin native tiling entry points including:

- keyboard quick-tiling actions,
- custom quick-tiling actions,
- drag-to-edge quick tiling,
- Shift-drag native custom tiling previews/zones,
- custom tile zone lookup through `quickTileGeometry(Custom, ...)`.

This is intended for users replacing KWin native tiling with PlasmaZones or another tiling solution.

## What this patch does not try to solve

This patch is specifically for **KWin 6.7.5**. It may not apply cleanly to other KWin versions.

The normal KWin snapping settings are separate from native tiling. In particular, KDE's existing **Snap only when overlapping** setting is not force-changed by this patch. (Quadrant snapping is disabled by this)

## Repository contents

Minimal files needed to build the patched package:

```text
PKGBUILD
.SRCINFO
disable-native-tiling.patch
LICENSE
README.md
.gitignore
```

Generated folders such as `src/` and `pkg/` are intentionally not committed. They are created by `makepkg` when building.

## Requirements

This is intended for Arch Linux or an Arch-based distro using `pacman`/`makepkg`.

### THIS PATCH WAS BUILT ON AND FOR CACHYOS! <u>USE AT YOUR OWN RISK!</u> 

You need the normal Arch build tools:

```bash
sudo pacman -S --needed base-devel git
```

`makepkg` will prompt for or report any missing KWin build dependencies.

## Build and install

Clone the repository:

```bash
git clone https://github.com/bossman22-dxf/KWin-NOTILES.git
cd KWin-NOTILES
```

Build and install:

```bash
makepkg -Csi --skippgpcheck
```

Why `--skippgpcheck`? Some systems do not have the KDE release signing key imported. If you prefer to verify the upstream signature, import the missing key instead and omit `--skippgpcheck`.

If you only want to build the package without installing it:

```bash
makepkg -Cs --skippgpcheck
```

Then install the generated package manually:

```bash
sudo pacman -U ./kwin-*.pkg.tar.zst
```

## Enable the no-native-tiling behavior

After installing, either use System Settings:

```text
System Settings → Window Management → Window Behavior → Advanced
→ uncheck "Enable built-in window tiling"
```

Or set it from the terminal:

```bash
kwriteconfig6 --file kwinrc --group Windows --key NativeTilingEnabled false
qdbus6 org.kde.KWin /KWin reconfigure
```

If behavior does not change immediately, log out and back in, or reboot.

Check the current value:

```bash
kreadconfig6 --file kwinrc --group Windows --key NativeTilingEnabled --default '<unset>'
```

Expected disabled value:

```text
false
```

If value above shows as ```'<unset>'``` then run
```bash
kwriteconfig6 --file kwinrc --group Windows --key NativeTilingEnabled false
```


## Prevent pacman from replacing the patched package

Edit pacman config:

```bash
sudo nano /etc/pacman.conf
```

Under `[options]`, add `kwin` to `IgnorePkg`:

```ini
IgnorePkg = kwin
```

If you already have ignored packages, add `kwin` to the same line, for example:

```ini
IgnorePkg = package1 package2 kwin
```

Do **not** use `kwin-6.7.5-3`; pacman ignores package names, not package-version strings.

## Verify the patched package is installed

```bash
pacman -Qi kwin
```

A locally built package commonly shows:

```text
Packager : Unknown Packager
```

Check that the installed KWin config schema contains the new option:

```bash
grep -RIn NativeTilingEnabled /usr/share/config.kcfg/kwin.kcfg
```

Expected output includes:

```text
<entry name="NativeTilingEnabled" type="Bool">
```

## Rebuild after changing the patch

If you edit `disable-native-tiling.patch`, update the checksum in `PKGBUILD`:

```bash
sha256sum disable-native-tiling.patch
```

Put the new hash in `sha256sums`, then regenerate `.SRCINFO`:

```bash
makepkg --printsrcinfo > .SRCINFO
```

Then rebuild:

```bash
makepkg -Csi --skippgpcheck
```

## Roll back to the official package

Remove `kwin` from `IgnorePkg` in `/etc/pacman.conf`, then reinstall KWin from your repos:

```bash
sudo pacman -S kwin
```

Log out and back in after reinstalling.
