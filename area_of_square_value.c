#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
