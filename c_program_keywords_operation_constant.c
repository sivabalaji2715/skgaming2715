include <stdio.h>

int main() {
    
    int a = 10, b = 5;
    float result;

    
    const float PI = 3.14;

    
    result = a + b;

    
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    printf("Addition = %.2f\n", result);

    
    if (a > b) {
        printf("a is greater than b\n");
    }

    
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    }

    
    printf("Value of PI = %.2f\n", PI);

    return 0;
}

Addition = 15.00
a is greater than b
Both numbers are positive.
Value of PI = 3.14
