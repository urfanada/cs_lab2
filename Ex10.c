#include <stdio.h>
#include <math.h>

int main() {
    float x0, y0, radius;
    float xi, yi;

    printf("Enter the center of the circle (x0, y0): ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter points (xi, yi):\n");
    while (scanf("%f %f", &xi, &yi) != EOF) {
        float distance = sqrt((xi - x0) * (xi - x0) + (yi - y0) * (yi - y0));

        if (distance < radius) {
            printf("Point (%.2f, %.2f) is INSIDE the circle.\n", xi, yi);
        } else if (distance == radius) {
            printf("Point (%.2f, %.2f) is ON the circle.\n", xi, yi);
        } else {
            printf("Point (%.2f, %.2f) is OUTSIDE the circle.\n", xi, yi);
        }
    }

    return 0;
}
