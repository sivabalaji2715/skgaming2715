#include <stdio.h>

// Global variable
int globalVar = 100;

// Function to demonstrate static variable
void display() {
    static int staticVar = 0; // Static variable
    staticVar++;
    printf("Static Variable = %d\n", staticVar);
}

int main() {
    // Local variable
    int localVar = 10;

    printf("Global Variable = %d\n", globalVar);
    printf("Local Variable = %d\n", localVar);

    display();
    display();
    display();

    return 0;
}
