#include "Stdhomework.h"
#include <iostream>

int main() {
    std::vector<std::vector<int>> arr; 
    int numberOfRows, numberOfColumns;

    std::cout << "Enter the number of rows: ";
    std::cin >> numberOfRows;
    std::cout << "Enter the number of columns: ";
    std::cin >> numberOfColumns;

    fillArrayWithFormula(arr, numberOfRows, numberOfColumns); 
    printArray(arr, numberOfRows, numberOfColumns);

    return 0;
}