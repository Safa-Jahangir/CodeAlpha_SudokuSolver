# Sudoku Solver 🧩

This is a simple C++ console program that solves a standard 9x9 Sudoku puzzle using **backtracking**.

## 🧑‍💻 Author
Safa Jahangir
GitHub: @Safa-Jahangir

## ✅ Features

- Solves any valid 9x9 Sudoku grid
- Uses recursion and backtracking
- No external libraries used (`<vector>`, etc.)
- Output is printed to the console



## 🔢 Example Input (Hardcoded in Code)

5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

## 🧠 How It Works

The program checks for empty spaces and recursively fills them with numbers from 1–9. It ensures that:
- No number is repeated in the same **row**
- No number is repeated in the same **column**
- No number is repeated in the same **3×3 box**

If no number fits, it **backtracks** and tries the next possibility.

## 📁 Files
sudoku_solver.cpp – C++ source file with the full logic
README.md – this file

## 🛠 How to Compile and Run

### 🐧 Linux / 🪟 Windows / 🍎 macOS:

Make sure you have a C++ compiler like `g++` installed.

```bash
g++ sudoku_solver.cpp -o sudoku
./sudoku





