#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    scanf("%d", &n);

    int count = 0;
    while (count < n) {
        float number;
        scanf("%f", &number);
        sum += number;
        count++;
    }

    printf("%.0f\n", sum);

    return 0;
}
