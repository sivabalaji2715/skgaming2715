#include<stdio.h>
int main()
{
	int num1;
	int num2;
	char op;
	printf("Enter num1");
	scanf("%d",&num1);
	printf("Enter num2");
	scanf("%d",&num2);
	printf("Enter operator");
	scanf("\n%c",&op);
	if(op=='+')
	{
		printf("sum=%d",num1+num2);
	}
	else if(op=='-')
	{
		printf("Diff=%d",num1-num2);
	}
	else if(op=='*')
	{
		printf("Multi=%d",num1*num2);
	}
	else if(op=='/')
	{
		printf("div=%d",num1/num2);
	}
	else 
	{
		printf("Invalid operator");
	}

	return 0;

}





