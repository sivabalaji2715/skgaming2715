#include<stdio.h>
int main()
{
	char ch1,ch2;
	int sum;
	printf("Enter the character value");
	scanf("%c %c",&ch1,&ch2);
	sum=ch1+ch2;
	printf("The ascii value of first element %d\n",ch1);
	printf("The ascii value of second element %d\n",ch2);
	printf("sum=%d\n",sum);
	return 0;
}

