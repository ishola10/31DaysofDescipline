#include <stdio.h>

// Function to calculate factorial using recursion
unsigned int factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    unsigned int number = 5;
    unsigned int result = factorial(number);
    printf("Factorial of %u is %u\n", number, result);
    return 0;
}
// This factorial function calculates the factorial of a given number n. It defines a base case (when n is 0 or 1) and otherwise calls itself with n - 1. This continues until the base case is met, and the results are multiplied back up the chain to get the final result.