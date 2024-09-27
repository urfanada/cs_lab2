#include <stdio.h>

int main() {
    int num;
    int length = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (num != 1) {
        printf("%d ", num);
        length++;\
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
    }

    printf("1\n");
    length++;

    printf("%d\n", length);

    return 0;
}
