#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d\n",&num);
	if(num & 1)
	{
		printf("%d\n is odd",num);
	}
	else
	{
		printf("%d\n is even",num);
	}
	return 0;
}
