#include <iostream>
#include "function-2-1.cpp" // Include the implementation of hexDigits
#include "function-1-1.h"
#include "function-1-1.cpp"

int main() {
    int *numbers = readNumbers(); // Read numbers and get the dynamically allocated array
    
    hexDigits(numbers, 10); // Print hex digits for each number
    
    delete[] numbers; // Deallocate the dynamically allocated array
    
    return 0;
}
