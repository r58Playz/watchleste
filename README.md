# watchleste
Celeste Classic for the Apple Watch

## Controlscheme
- Digital crown scroll up: Dash
- Digital crown scroll down: Jump
- Screen: Up, down, left, right

## Building
1. Open the xcodeproj and build as normal. Rustic-mountain is included in the repo, prebuilt.

## Building rustic-mountain
1. Run `sed -i s/dylib/staticlib/ librustic/Cargo.toml` in the rustic-mountain source (if you are not using GNU sed, it's `-i ''`)
2. Run `cargo b -r -Z build-std --target <arch>-apple-watchos -p rustic-mountain-lib` 3 times, replacing `<arch>` with `aarch64`, `arm64_32`, and `armv7k`.
3. Run `lipo -create target/*-apple-watchos/release/librustic_mountain_lib.a -output librustic_mountain_lib_universal.a` to create the universal static lib.
