#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, fib;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci number at position %d: 0\n", n);
        return 0;
    }
    if (n == 1) {
        printf("Fibonacci number at position %d: 1\n", n);
        return 0;
    }

    int i = 2;
    while (i <= n) {
        fib = a + b;
        a = b;
        b = fib;
        i++;
    }

    printf("%d\n", fib);

    return 0;
}
