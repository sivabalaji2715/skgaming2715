#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("Before swapping:a=%d\n",a);
	printf("Before swapping:b=%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping:a=%d b=%d\n",a,b);
	return 0;
}
