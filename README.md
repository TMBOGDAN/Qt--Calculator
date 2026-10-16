# Qt Calculator

A desktop calculator made with C++17 and Qt Widgets. Button input is evaluated by a separate `ExpressionEvaluator` class.

## Features

Basic arithmetic (`+`, `-`, `*`, `/`), remainder (`%`), decimal input, parentheses, clear and backspace buttons, and an error display for invalid expressions. The evaluator tokenizes input, converts infix expressions to postfix, and evaluates the postfix stack. Division-by-zero handling is not explicitly implemented.

## Project files

`mainwindow.*` and `mainwindow.ui` contain the Qt interface; `ExpressionEvaluator.*` contains expression parsing and calculation; `main.cpp` starts the application; `resource.qrc` and `resources/` contain the icon; `CMakeLists.txt` configures the build.

## Build and run

Install CMake 3.16+, a C++17 compiler, and Qt 5 or Qt 6 with Widgets. Open `CMakeLists.txt` in Qt Creator and choose a compatible kit, or run:

```sh
cmake -S . -B build
cmake --build build
```

Run the `Calculator` executable from the build directory. The CMake configuration removes a reference to the absent `ignore.gitignore` file and a stray `MANUAL_FINALIZATION` source entry. No automated tests are included.

## Limitations and next steps

Negative-number tokenization and division by zero need explicit validation; add evaluator tests before extending functions. A local `build/` output directory is currently tracked; the `.gitignore` stops future additions, while removing existing tracked output needs separate approval. No screenshot is included, so this README does not display a placeholder.
