#include<stdio.h>
typedef struct
{
	char name[20];
	int rollno;
	int marks;
}student;
void printresult(student s)
{
	if(s.marks>=40)
	{
		printf("%s(Roll%d):PASS\n",s.name,s.rollno);
	}
	else
	{
		prnitf(
