#include <stdio.h>

typedef int* intptr;

void swap(intptr a, intptr b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before Swapping\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("After Swapping\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
