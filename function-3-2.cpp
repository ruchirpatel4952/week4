#include <iostream>
#include "function-3-2.h"

int *reverseArray(int *numbers1, int length) {
    int *reversedArray = new int[length]; // Dynamically allocate a new array
    
    for (int i = 0; i < length; ++i) {
        reversedArray[i] = numbers1[length - 1 - i]; // Reverse the elements
    }
    
    return reversedArray;
}
int *readNumbers() {
    int *numbers = new int[10]; // Dynamically allocate an array of 10 integers
    
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i]; // Read input numbers
    }
    
    return numbers;
}

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