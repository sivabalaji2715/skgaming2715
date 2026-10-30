#include<stdio.h>
int main()
{
	int n,original,rem,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==original)
	{
		printf("Arm strong number=%d\n",n);
	}
	else
	{
		printf("Not a arm strong number");
	}
	return 0;
}
