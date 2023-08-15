#include <iostream>
#include "function-3-2.cpp" // Include the implementation of reverseArray
#include "function-3-1.cpp"

int main() {
    int *numbers1 = readNumbers(); // Read the array
    
    int *reversedNumbers = reverseArray(numbers1, 10); // Reverse the array
    
    bool areEqual = equalsArray(numbers1, reversedNumbers, 10); // Compare original and reversed arrays
    
    std::cout << std::boolalpha << areEqual << std::endl; // Print the result
    
    delete[] numbers1; // Deallocate the dynamically allocated arrays
    delete[] reversedNumbers;
    
    return 0;
}
