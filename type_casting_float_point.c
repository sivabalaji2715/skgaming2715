include <stdio.h>

int main() {
    float num;
    int result;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    result = (int)num;   

    printf("Original float value : %.2f\n", num);
    printf("Converted integer value : %d\n", result);

    return 0;
}

