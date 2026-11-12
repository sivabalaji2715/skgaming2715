#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("Student Details \n");

    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Student Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Student Marks: ");
    scanf("%f", &s1.marks);

    display(s1);

    return 0;
}
