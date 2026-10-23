#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d\n",&num);
	if(num %2==0)
	{
		printf("%d\n is even",num);
	}
	else
	{
		printf("%d\n is odd",num);
	}
	return 0;
}

