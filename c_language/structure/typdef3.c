#include <stdio.h>

typedef unsigned int u32;

int main()
{
    u32 a = 100;
    u32 b = 200;
    u32 c = 300;

    printf("Value of a = %u\n", a);
    printf("Value of b = %u\n", b);
    printf("Value of c = %u\n", c);

    printf("Size of u32 = %zu bytes\n", sizeof(u32));

    return 0;
}
