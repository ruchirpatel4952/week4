#include <iostream>
#include "function-3-1.h" // Include the implementation of equalsArray

int main() {
    int *numbers1 = readNumbers(); // Read the first array
    int *numbers2 = readNumbers(); // Read the second array
    
    bool areEqual = equalsArray(numbers1, numbers2, 10); // Compare the arrays
    
    std::cout << std::boolalpha << areEqual << std::endl; // Print the result
    
    delete[] numbers1; // Deallocate the dynamically allocated arrays
    delete[] numbers2;
    
    return 0;
}
