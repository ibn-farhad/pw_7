# Project Summary

- **Project:** PW_7 — Practical Work 7
- **Language:** C++ (C++17)
- **Build system:** CMake (minimum 3.27)
- **Build type:** Debug (CMAKE_BUILD_TYPE)

- **What was done:**
  - Added an executable `pw_7` built from `main.cpp`.
  - Project links against an imported shared library `matrixlib`.
  - `main.cpp` demonstrates the C-compatible matrix API:
    - create a `Matrix`, set elements, print, and delete it.
  - `CMakeLists.txt` imports `matrixlib` from `libs/matrixlib/shared-matrixlib.so` and links it to the executable.
  - `MATH_USE_DOUBLE_PRECISION` is set (using `double` as `real`).

- **How to build & run:**

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
./build/pw_7
```

- **Notes:**
  - Ensure `libs/matrixlib/shared-matrixlib.so` exists and is readable at build/run time.
  - The program prints a 3x3 matrix with a few set values (example usage in `main.cpp`).

--
Generated summary of the current project state.
