#include <stdio.h>

int main() {
    float num = 15.75;
    int result;

    result = (int)num;   

    printf("Original float value : %.2f\n", num);
    printf("After type casting to int : %d\n", result);

    return 0;
}

