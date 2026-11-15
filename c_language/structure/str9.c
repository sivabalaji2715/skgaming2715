#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
    int pincode;
};

struct Student
{
    int id;
    char name[50];

    struct Address addr;
};

int main()
{
    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter City: ");
    scanf("%s", s1.addr.city);

    printf("Enter State: ");
    scanf("%s", s1.addr.state);

    printf("Enter Pincode: ");
    scanf("%d", &s1.addr.pincode);

    printf(" Student Details\n");

    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);

    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);
    printf("Pincode: %d\n", s1.addr.pincode);

    return 0;
}
