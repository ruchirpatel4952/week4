#include <iostream>

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
