# C Modular Basics: Preprocessor Directives & Macros

A modular C demonstration project built with MinGW GCC inside STM32CubeIDE.

## Project Structure
- `main.c`: Application entry point and console output.
- `math_utils.h`: Header file containing macro definitions and function prototypes with header guards.
- `math_utils.c`: Implementation of arithmetic and even-number counting utilities.

## Build & Run
Compile via STM32CubeIDE (MinGW GCC toolchain) or manually via terminal:
```bash
gcc main.c math_utils.c -o app.exe
./app.exe
```
