#include <stdio.h>

struct Employee
{
    int id;
    float salary;
    char department[50];
};

int main()
{
    struct Employee emp[5];
    int i, high = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Enter Employee Details %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter Department: ");
        scanf("%49s", emp[i].department);
    }

    for(i = 1; i < 5; i++)
    {
        if(emp[i].salary > emp[high].salary)
        {
            high = i;
        }
    }

    
    printf(" Highest Salary Employee \n");

    printf("Employee ID: %d\n", emp[high].id);
    printf("Salary: %.2f\n", emp[high].salary);
    printf("Department: %s\n", emp[high].department);

    return 0;
}
