#include <stdio.h>

int main() {
    int a, b, k, sum = 0;

    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    printf("Enter the divisor (k): ");
    scanf("%d", &k);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a <= b) {
        if (a % k == 0) {
            sum = sum + a;
        }
        a++;
    }

    printf("Sum of elements divisible by %d in the range is: %d\n", k, sum);

    return 0;
}
