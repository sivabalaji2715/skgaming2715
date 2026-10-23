#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("sizeof array=%zubytes\n",sizeof(arr));
	printf("sizeof one element=%zubytes\n",sizeof(arr[0]));
	printf("Number of elements=%zu\n",sizeof(arr)/sizeof(arr[0]));
	return 0;
}
