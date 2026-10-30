#include<stdio.h>
int main()
{
	int num1;
	int num2;
	char op;
	printf("Enter num1");
	scanf("%d",&num1);
	printf("ENter num2");
	scanf("%d",&num2);
	printf("Enter the operator");
	scanf("\n%c",&op);
	
	switch (op)
	{
		case '+':
			printf("Sum:%d",num1+num2);
			break;

		case '-':
			printf("Diff:%d",num1-num2);
			break;
		case '*':
			printf("Multi:%d",num1*num2);
			break;
		case '/':
			printf("Div:%d",num1/num2);
			break;
		default:
			printf("Invalid operator");
			break;
	}
	return 0;
}

			

		
