#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;
    float total = 0, average;

    for(i = 0; i < 5; i++)
    {
        printf("Enter Student %d Details\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        total = total + s[i].marks;
    }

    
    average= total/5;
    printf(" Student Details");

    for(i = 0; i < 5; i++)
    {
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    printf("Total Marks = %.2f", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
