#include <iostream>
#include "function-4-1.cpp" // Include the implementation of secondSmallestSum
#include "function-1-1.h"
#include "function-1-1.cpp"

int main() {
    int *numbers = readNumbers(); // Read numbers and get the dynamically allocated array
    
    int result = secondSmallestSum(numbers, 10); // Calculate the second smallest sum
    
    std::cout << result << std::endl; // Print the result
    
    delete[] numbers; // Deallocate the dynamically allocated array
    
    return 0;
}
