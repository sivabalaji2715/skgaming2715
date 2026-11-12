#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

void modify(struct Student s)
{
    s.id = 200;
    s.marks = 95.5;

    printf("Inside Function:\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    s1.id = 101;
    s1.marks = 75.5;

    printf("Before Function:\n");
    printf("ID = %d\n", s1.id);
    printf("Marks = %.2f\n", s1.marks);

    modify(s1);

    printf("After Function:\n");
    printf("ID = %d\n", s1.id);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}
