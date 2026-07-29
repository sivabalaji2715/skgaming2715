#include <stdio.h>


int num = 10;


void modify() {
    num = 50;
}

int main() {
    printf("Before modification: %d\n", num);

    modify();

    printf("After modification: %d\n", num);

    return 0;
}
