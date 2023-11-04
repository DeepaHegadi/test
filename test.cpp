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
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate and output the factorial
        std::cout << "Factorial of " << number << " is: " << factorial(number) << std::endl;
    }
    
    return 0;
}
