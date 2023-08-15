#include <iostream>
#include "function-3-1.cpp" // Include the implementation of equalsArray
#include "function-1-1.h"
#include "function-1-1.cpp"

int main() {
    int *numbers1 = readNumbers(); // Read the first array
    int *numbers2 = readNumbers(); // Read the second array
    
    bool areEqual = equalsArray(numbers1, numbers2, 10); // Compare the arrays
    
    std::cout << std::boolalpha << areEqual << std::endl; // Print the result
    
    delete[] numbers1; // Deallocate the dynamically allocated arrays
    delete[] numbers2;
    
    return 0;
}
