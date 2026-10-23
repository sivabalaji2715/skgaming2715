#include<stdio.h>
int main()
{
	int a;
	int b;
	int temp;
	printf("Enter the values");
	scanf("%d %d",&a,&b);
	printf("Before swapping:a=%d\n,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:a=%d\n,b=%d\n",a,b);
	return 0;
}

