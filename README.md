# C++ Basics

This is a personal repository to monitor my learning progress and build a strong foundation in **C++**, **Git**, and related development workflows.

> Latest projects are much more organized and follow standard C++ principles, including modern project structures with **CMake**, proper **clangd** setup, and support for editor tooling like **Neovim**.

---

## Repository Structure

- `Basics/` – Early code written using **Visual Studio Code** (without CMake)
- `T_<Project_Name>/` – Recent and well-structured projects with **CMake**, **clangd**, and **Neovim** support
- `build/` – CMake-generated build files (usually added to `.gitignore`)
- `.clangd` – Configuration for `clangd` LSP
- `CMakeLists.txt` – CMake configuration file for each structured project
- `compile_commands.json` – Generated file for better LSP support and autocompletion

---

## How to Run the Projects

There are two types of projects in this repository:

---

### 1. **Old Projects**

These were written during my early learning phase using **VS Code**.  
They do not use `CMakeLists.txt` or `compile_commands.json`, so they require a basic compiler setup or IDE to run.

#### ➤ How to Run (Example for single-file program):

```bash
g++ filename.cpp -o output && ./output
```

Alternatively, open the `.cpp` files in **VS Code**, **Code::Blocks**, or any C++ IDE and run directly.

---

### 2. **Modern CMake-based Projects**

I now follow standard project structure practices using **CMake**, enabling compatibility with Neovim, clangd, and most IDEs. These projects include `CMakeLists.txt`, `.clangd`, `compile_commands.json`, and are tested in **Neovim** with full LSP support.

#### Prerequisites:

- CMake ≥ 3.16  
- GCC or Clang (I use `clang++` and `clang`)  
- [Ninja](https://ninja-build.org/) (for faster builds)  
- [bear](https://github.com/rizsotto/Bear) (optional, for generating `compile_commands.json`)  
- Neovim + `clangd` (optional, for LSP experience)

---

### 🔧 Steps to Build and Run

```bash
# 1. Clone the repository
git clone https://github.com/priyeshmishra235/CPP.git
cd CPP/T_<Project_Name>

# 2. Create and navigate to the build directory
mkdir -p build && cd build

# 3. Generate build files with CMake
CXX=clang++ CC=clang cmake -G Ninja ..

# 4. Build using Ninja
ninja

# 5. Run the output binary
./<binary_name>  # Located in build/bin or current build directory
```

## Author

Made with ❤️ by [@priyeshmishra235](https://github.com/priyeshmishra235)
