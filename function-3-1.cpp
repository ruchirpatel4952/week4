#include <iostream>
#include "function-3-1.h"

bool equalsArray(int *numbers1, int *numbers2, int length) {
    if (length < 1) {
        return false; // Arrays with length less than 1 should return false
    }
    
    for (int i = 0; i < length; ++i) {
        if (numbers1[i] != numbers2[i]) {
            return false; // If any numbers are not equal, return false
        }
    }
    
    return true; // All numbers are equal
}

int *readNumbers() {
    int *numbers = new int[10]; // Dynamically allocate an array of 10 integers
    
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i]; // Read input numbers
    }
    
    return numbers;
}