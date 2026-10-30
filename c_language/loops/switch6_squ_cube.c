#include<stdio.h>
int main()
{
	int choice,n;
	printf("1.square\n");
	printf("2.cube\n");
	printf("Enter the choice");
	scanf("%d",&choice);
	printf("ENter the number");
	scanf("%d",&n);
	switch(choice)
	{
		case 1:
			printf("square=%d\n",n*n);
			break;
		case 2:
			printf("Cube=%d\n",n*n*n);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
			 

	
