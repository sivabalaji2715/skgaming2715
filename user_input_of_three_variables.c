#include <stdio.h>

int main() {
    int num;
    float value;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &value);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nEntered Values:\n");
    printf("Integer = %d\n", num);
    printf("Float = %.2f\n", value);
    printf("Character = %c\n", ch);

    return 0;
}
