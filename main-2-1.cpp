#include <iostream>
#include "function-2-1.h" // Include the function-2-1 header
#include "function-1-1.h"
#include "function-1-1.cpp"

int main() {
    int *numbers = readNumbers(); // Read the array
    
    hexDigits(numbers, 10); // Use the hexDigits function
    
    delete[] numbers; // Deallocate the dynamically allocated array
    
    return 0;
}
