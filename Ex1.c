#include <stdio.h>

int main() {
    int n, i = 1;
    int sum = 0;
    int product = 1;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    while(i <= n) {
        int element = 3 * i - 1; 
        sum = sum + element;
        product = product * element;  
        i++; 
    }

    printf("Sum of the first %d elements: %d\n", n, sum);
    printf("Product of the first %d elements: %d\n", n, product);

    return 0;
}
