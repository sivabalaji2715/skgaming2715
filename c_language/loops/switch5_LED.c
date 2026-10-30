#include<stdio.h>
int main()
{
	int choice;
	printf("1.LED on\n");
	printf("2.LED off\n");
	printf("3.EXIt\n");
	printf("Enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("LED IS ON\n");
			break;
		case 2:
			printf("LED IS OFF\n");
			break;
		case 3:
			printf("Program exited\n");
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}



