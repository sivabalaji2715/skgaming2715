#include <stdio.h>

typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

int main()
{
    u16 a = 1000;
    u32 b = 50000;
    u64 c = 1000000;

    printf("Value of u16 = %hu\n", a);
    printf("Value of u32 = %u\n", b);
    printf("Value of u64 = %lu\n", c);

    printf(" Data Type Sizes\n");

    printf("Size of u16 = %zu bytes\n", sizeof(u16));
    printf("Size of u32 = %zu bytes\n", sizeof(u32));
    printf("Size of u64 = %zu bytes\n", sizeof(u64));

    return 0;
}
