#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the position to calculate Fibonacci number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid position. Please enter a non-negative number.\n");
    } else {
        int result = fibonacci(n);
        printf("Fibonacci number at position %d is: %d\n", n, result);
    }
    return 0;
}

