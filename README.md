# KWin NO-TILES for CachyOS

KWin NO-TILES adds a setting to disable KWin's built-in native tiling while leaving the rest of KWin intact. It is intended for people who use an external tiling manager such as [PlasmaZones](https://github.com/fuddlesworth/PlasmaZones).

## Current scope

- KWin source: KDE's stable KWin tarball.
- Package source: the live CachyOS `cachyos-extra-v3` repository.
- CPU target: x86-64-v3, tuned for Zen 2 (`-march=x86-64-v3 -mtune=znver2`).
- Package name: `kwin-no-tiles`.
- KWin config key: `[Windows] NativeTilingEnabled=false`.
- Patch: `disable-native-tiling-6.8.patch`.

The initial baseline tested by CI is KWin `6.8.1-2.1`. A successful build verifies compilation and package contents; it does **not** prove that the package has been runtime-tested in a live Plasma session. Releases explicitly say this.

## What the patch changes

The patch adds a KWin config option and a checkbox for enabling or disabling built-in window tiling. When disabled, it blocks KWin's native tiling entry points and releases existing native tile assignments, so an external tiler can manage window placement.

The setting is intended to leave ordinary window snapping separate. It does not force-change KDE's unrelated snapping settings.

## Automated build and release policy

`.github/workflows/auto-release-cachyos-v3.yml` runs on a daily schedule or manual dispatch. It deliberately has **no push trigger**, so editing or importing repository files cannot accidentally start a long package build.

For each run it:

1. Queries the live KWin package version in CachyOS's v3 repository.
2. Skips versions that already have a successful release and skips if the configured mirror reports an older version than the latest release.
3. Authenticates the official KDE source tarball with its detached signature and the allowed KDE signing-key fingerprints.
4. Requires the patch to apply with zero fuzz.
5. Builds inside a CachyOS container, targeting x86-64-v3/Zen 2 rather than the GitHub runner CPU.
6. Checks the built package name, version, `provides`/`conflicts` metadata, `kwin_wayland` binary, and the `NativeTilingEnabled` schema entry.
7. Creates a versioned GitHub Release only after every previous check succeeds.

The workflow never reuses a successful release tag. If source authentication, patch application, dependency resolution, compilation, or package-content checks fail, it publishes no package. Once a new release is successfully published, the workflow attempts to retain only the two most recent successful releases.

The separate `build-cachyos-kwin-6.8.1.yml` workflow is a manual-only baseline build that uploads a test artifact but does not publish a Release.

## Safe maintenance rules

- Do not install a package only because compilation succeeded. Runtime testing on a live CachyOS Plasma session remains a separate step.
- If the patch no longer applies cleanly to a newer KWin version, stop and update/review the patch rather than allowing fuzz.
- If KDE changes its release-signing keys, add a verified fingerprint to `validpgpkeys` in `PKGBUILD` before trying to publish a new version.
- If build dependencies or runtime dependencies change, update the recipe and `.SRCINFO` after review. A successful source build is not permission to ignore package metadata changes.
- Keep the upstream stock KWin package cache available until the new package has been runtime-tested and a recovery route has been confirmed.

## Files

- `PKGBUILD`: Arch/CachyOS package recipe.
- `.SRCINFO`: generated package metadata for repository tooling.
- `disable-native-tiling-6.8.patch`: patch for KWin 6.8.x source, currently reviewed against 6.8.1.
- `.github/scripts/query-cachyos-v3.sh`: live v3 repository query.
- `.github/scripts/build-cachyos-v3.sh`: version-parameterized, checked build script.
- `.github/workflows/auto-release-cachyos-v3.yml`: scheduled new-version check/build/release workflow.
- `.github/workflows/build-cachyos-kwin-6.8.1.yml`: manual baseline build, no release.
- `.github/workflows/preflight-kwin-6.8.1.yml`: manual source/patch/repository preflight.

## License

The package recipe derives from the Arch KWin packaging recipe, so the included packaging license/attribution file is retained. The patch and automation should be reviewed independently when distributing the package.
