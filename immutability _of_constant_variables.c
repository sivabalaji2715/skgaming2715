#include <stdio.h>

int main() {
    const int value = 100;

    printf("Constant value = %d\n", value);

    // value = 200;   // Error: Cannot modify a constant variable

    return 0;
}
