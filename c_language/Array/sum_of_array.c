#include<stdio.h>
int main()
{
	int heights[100],i,n;
	printf("enter the number of heights:");
	scanf("%d",&n);
	printf("Enter the height:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&heights[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("person height%d:%d\n",i+1,heights[i]);
	}
	return 0;
}


