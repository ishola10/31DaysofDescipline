#include <stdio.h>

void funcB(int n); // Function prototype

void funcA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcB(n - 1); // Call to the other function
    }
}

void funcB(int n) {
    if (n > 1) {
        printf("%d ", n);
        funcA(n / 2); // Call to the first function
    }
}

int main() {
    int number = 10;
    funcA(number); // Initiating the sequence with funcA
    return 0;
}
