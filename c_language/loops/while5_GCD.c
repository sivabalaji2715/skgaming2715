#include<stdio.h>
int main()
{
	int a,b,i,gcd=1;
	printf("Enter the numbers");
	scanf("%d %d",&a,&b);
	i=1;
	while(i<=a && i<=b)
	{
		if(a %i==0 && b%i==0)
		{
			gcd=i;
		}
		i++;
		printf("GCD=%d\n",gcd);
		return 0;
	}
}
