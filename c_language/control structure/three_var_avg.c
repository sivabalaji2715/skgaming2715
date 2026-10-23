#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int sum;
	float average;
	printf("Enter the three variables");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	average=sum/3.0;
	printf("Sum =%d\n",sum);
	printf("Average=%2.f\n",average);
	return 0;
}
