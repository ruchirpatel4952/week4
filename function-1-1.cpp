#include <iostream>
#include "function-1-1.h"

int *readNumbers() {
    int *numbers = new int[10]; // Dynamically allocate an array of 10 integers
    
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i]; // Read input numbers
    }
    
    return numbers;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

