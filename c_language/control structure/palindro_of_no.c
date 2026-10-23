#include<stdio.h>
int main()
{
	int num,original,reverse,digit=0;
	printf("Enter the number");
	scanf("%d",&num);
	original =num;
	while (num!=0)
	{
		digit =num%10;
		reverse = reverse*10+digit;
		num=num/10;
	}
	if(original == reverse)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	return 0;
}
