#include<stdio.h>
int main()
{
	int arr[4]={1,2,3,4};
	int i;
	int temp;
	for(i=0;i<4/2;i++)
	{
		temp=arr[i];
		arr[i] =arr[3-i];
		arr[3-i]=temp;
	}
	printf("Reversed array");
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
