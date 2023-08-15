#include <iostream>
#include <climits> // For INT_MAX

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) {
        return INT_MAX; // Not enough elements for sub-arrays
    }
    
    int secondSmallest = INT_MAX;
    
    for (int start = 0; start < length; ++start) {
        int currentSum = 0;
        
        for (int end = start; end < length; ++end) {
            currentSum += numbers[end];
            
            if (currentSum < secondSmallest) {
                secondSmallest = currentSum;
            }
        }
    }
    
    return secondSmallest;
}
