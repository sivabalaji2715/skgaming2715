#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};

int main()
{
	struct student s1;
	
	printf("Enter student ID:");
	scanf("%d",&s1.id);
	printf("ENter student name:");
	scanf("%s",s1.name);
	printf("Enter student marks:");
	scanf("%f",&s1.marks);
	printf("Student details\n");
	printf("Student ID:%d\n",s1.id);
	printf("Student name:%s\n",s1.name);
	printf("Student marks:%.2f\n",s1.marks);
	return 0;
}



