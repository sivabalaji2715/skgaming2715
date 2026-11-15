#include <stdio.h>

typedef unsigned char u8;

int main()
{
    u8 a = 10;
    u8 b = 5;
    u8 result;

    result = a + b;

    printf("Value of a = %u\n", a);
    printf("Value of b = %u\n", b);

    printf("Addition = %u\n", result);

    printf("Size of u8 = %zu bytes\n", sizeof(u8));

    return 0;
}
