#include <iostream>

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