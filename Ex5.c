#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }

    printf("The sum of even digits is: %d\n", sum);

    return 0;
}
