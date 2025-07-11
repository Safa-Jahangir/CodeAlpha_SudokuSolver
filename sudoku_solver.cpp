// sudoku_solver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 9;

// Print the Sudoku board
void printBoard(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
        cout << grid[row][col] << " ";}
        cout << endl;}
}

// Check if it's safe to place a number
bool isSafe(int grid[N][N], int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num)
            return false;
    }

    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
         if (grid[i + startRow][j + startCol] == num)
         return false;
    return true;
}

// Solve using backtracking
bool solveSudoku(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
     for (int col = 0; col < N; col++) {
       if (grid[row][col] == 0) { // Empty cell
     for (int num = 1; num <= 9; num++) {
       if (isSafe(grid, row, col, num)) 
	   { grid[row][col] = num;
         if (solveSudoku(grid))
         return true;
         grid[row][col] = 0; }
         }
	 return false;}
        }
    }
    return true; // All cells filled
}

int main() {
    int grid[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Unsolved Sudoku:\n";
    printBoard(grid);

    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku:\n";
        printBoard(grid);
    } else {
        cout << "\nNo solution exists!\n";
    }
	system("pause");
    return 0;
}


