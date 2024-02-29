// main-1-1.cpp
#include <iostream>

// Declare the function signature
int array_sum(int array[], int n);

int main() {
    // Example usage
    int myArray[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the function and display the result
    int sum = array_sum(myArray, size);

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}