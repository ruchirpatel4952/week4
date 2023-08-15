#include <iostream>
#include "function-1-1.cpp" // Include the implementation of readNumbers and printNumbers

int main() {
    int *numbers = readNumbers(); // Read numbers and get the dynamically allocated array
    
    printNumbers(numbers, 10); // Print the numbers in the array
    
    delete[] numbers; // Deallocate the dynamically allocated array
    
    return 0;
}
