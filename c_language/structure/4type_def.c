#include <stdio.h>

typedef struct Student
{
    int roll_no;
    char name[50];
    float marks;

} Student;

int main()
{
    Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter Name: ");
    scanf("%49s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("Student Details \n");

    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
