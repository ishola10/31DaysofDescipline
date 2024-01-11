#include <stdio.h>

int sumOfNaturals(int n) {
    // Base case
    if (n == 0) {
        return 0;
    } else {
        // Recursive call
        return n + sumOfNaturals(n - 1);
    }
}

int main() {
    int number = 5;
    int result = sumOfNaturals(number);
    printf("Sum of natural numbers up to %d is %d\n", number, result);
    return 0;
}
