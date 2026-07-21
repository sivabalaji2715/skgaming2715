#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is Odd\n", num);
    else
        printf("%d is Even\n", num);

    return 0;
}
Sample Output 1
Enter a number: 8
8 is Even
Sample Output 2
Enter a number: 15
15 is Odd
