#include<stdio.h>
int main()
{
	int n;
	int first=0,second=1;
	int next;
	int i=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d",first);
		next=first+second;
		first=second;
		second=next;
		i++;
	}
	return 0;
}

