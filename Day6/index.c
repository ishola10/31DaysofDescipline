// Direct recursion

#include <stdio.h>

// Function to calculate the sum of natural numbers using direct recursion
int sumOfNaturals(int n) {
    if (n == 0) {
        return 0; // Base case: if n is 0, return 0
    } else {
        return n + sumOfNaturals(n - 1); // Recursive call
    }
}

int main() {
    int number = 5;
    int result = sumOfNaturals(number);
    printf("Sum of natural numbers up to %d is %d\n", number, result);
    return 0;
}
