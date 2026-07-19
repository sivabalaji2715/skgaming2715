#include <stdio.h>

int main() {
    printf("Size of char   : %zu byte(s)\n", sizeof(char));
    printf("Size of int    : %zu byte(s)\n", sizeof(int));
    printf("Size of float  : %zu byte(s)\n", sizeof(float));
    printf("Size of double : %zu byte(s)\n", sizeof(double));
    printf("Size of long   : %zu byte(s)\n", sizeof(long));
    printf("Size of short  : %zu byte(s)\n", sizeof(short));

    return 0;
}
Sample Output
Size of char   : 1 byte(s)
Size of int    : 4 byte(s)
Size of float  : 4 byte(s)
Size of double : 8 byte(s)
Size of long   : 8 byte(s)
Size of short  : 2 byte(s)
