#include "Stdhomework.h"
#include <iostream>

void fillArrayWithFormula(std::vector<std::vector<int>>& arr, int rows, int columns) {
    arr.resize(rows, std::vector<int>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = (i + j) * 2;
        }
    }
}

void printArray(const std::vector<std::vector<int>>& arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl; 
    }
}