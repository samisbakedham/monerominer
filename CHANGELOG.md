# v6.15.2
- [#2606]) Fixed: AstroBWT auto-config ignored `max-threads-hint`.
- Fixed possible crash on Windows (regression in v6.15.1).

# v6.15.1
- [#2586] Fixed Windows 7 compatibility.
- [#2594]( Added Windows taskbar icon colors.

# v6.15.0
- [#2548] Added automatic coin detection for daemon mining.
- [#2563] Added new algorithm RandomX Graft (`rx/graft`).
- [#2565] AstroBWT: added AVX2 Salsa20 implementation.
- Added support for new CUDA plugin API (previous API still supported).

# v6.14.1
- [#2532] Refactoring: stable (persistent) algorithms IDs.
- [#2537]Fixed Termux build.

# v6.14.0
- [#2484]Added ZeroMQ support for solo mining.
- [#2476](Fixed crash in DMI memory reader.
- [#2492] Added missing `--huge-pages-jit` command line option.
- [#2512] Added show the number of transactions in pool job.

# v6.13.1
- [#2468] Fixed regression in previous version: don't send miner signature during regular mining.

# v6.13.0
- [#2445] Added support for solo mining with miner signatures for the upcoming Wownero fork.

# v6.12.2
- [#2280]GPU backends are now disabled in benchmark mode.
- [#2322]Improved MSR compatibility with recent Linux kernels and updated `randomx_boost.sh`.
- [#2340]Fixed AES detection on FreeBSD on ARM.
- [#2341] `sse2neon` updated to the latest version.
- [#2351] Fixed help output for `--cpu-priority` and `--cpu-affinity` option.
- [#2375] Fixed macOS CUDA backend default loader name.
- [#2378] Fixed broken light mode mining on x86.
- [#2379] Fixed CL code for KawPow where it assumes everything is AMD.
- [#2386] RandomX: enabled `IMUL_RCP` optimization for light mode mining.
- [#2393] RandomX: added BMI2 version for scratchpad prefetch.
- [#2395] RandomX: rewrote dataset read code.
- [#2398] RandomX: optimized ARMv8 dataset read.
- Added `argon2/ninja` alias for `argon2/wrkz` algorithm.

# v6.12.1
- [#2296] Fixed Zen3 assembly code for `cn/upx2` algorithm.

# v6.12.0
- [#2276] Added support for Uplexa (`cn/upx2` algorithm).
- [#2261] Show total hashrate if compiled without OpenCL.
- [#2289] RandomX: optimized `IMUL_RCP` instruction.
- Added support for `--user` command line option for online benchmark.

# v6.11.2
- [#2207] Fixed regression in HTTP parser and llhttp updated to v5.1.0.

# v6.11.1
- [#2239 Fixed broken `coin` setting functionality.

# v6.11.0
- [#2196] Improved DNS subsystem and added new DNS specific options.
- [#2172] Fixed build on Alpine 3.13.
- [#2177] Fixed ARM specific compilation error with GCC 10.2.
- [#2217] Fixed mining job creation sequence.
- [#2225] Fixed build without OpenCL support on some systems.
- [#2229] Don't use RandomX JIT if `WITH_ASM=OFF`.
- [#2228] Removed useless code for cryptonight algorithms.
- [#2234] Fixed build error on gcc 4.8.

# v6.10.0
- [#2122]Fixed pause logic when both pause on battery and user activity are enabled.
- [#2123] Fixed compatibility with gcc 4.8.
- [#2147] Fixed many `new job` messages when solo mining.
- [#2150] Updated `sse2neon.h` to the latest master, fixes build on ARMv7.
- [#2157]Fixed crash in `cn-heavy` on Zen3 with manual thread count.
- Fixed possible out of order write to log file.

# v6.9.0
- [#2117] Fixed crash when GPU mining `cn-heavy` on Zen3 system.

# v6.8.2
- [#2080] Fixed compile error in Termux.
- [#2089]Optimized CryptoNight-Heavy for Zen3, 7-8% speedup.

# v6.8.1
- [#2064]  Added documentation for config.json CPU options.
- [#2066] Fixed AMD GPUs health data readings on Linux.
- [#2067] Fixed compilation error when RandomX and Argon2 are disabled.
- [#2076] Added support for flexible huge page sizes on Linux.
- [#2077] Fixed `illegal instruction` crash on ARM.

# v6.8.0
- [#2052]Added DMI/SMBIOS reader.
  - Added information about memory modules on the miner startup and for online benchmark.
  - Added new HTTP API endpoint: `GET /2/dmi`.
  - Added new command line option `--no-dmi` or config option `"dmi"`.
  - Added new CMake option `-DWITH_DMI=OFF`.
- [#2057] Improved MSR subsystem code quality.
- [#2058]RandomX JIT x86: removed unnecessary instructions.

# v6.7.2
- [#2039]Fixed solo mining.



# Previous versions
