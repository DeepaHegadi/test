#include <iostream>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    
    // Input
    std::cout << "Enter a non-negative integer: ";
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1; // Exit with an error code
    }

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate and output the factorial
        int result = factorial(number);
        if (result < 0) {
            std::cerr << "Factorial result is too large for int data type." << std::endl;
            return 1; // Exit with an error code
        }
        std::cout << "Factorial of " << number << " is: " << result << std::endl;
    }
    
    return 0;
}

