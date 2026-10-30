#include<stdio.h>
int main()
{
	char*arr[3]={"RED" ,"YELLOW","GREEN"};
	int i;
	printf("Enter the traffic signal");
	printf("0.RED\n");
	printf("1.YELLOW\n");
	printf("2.GREEN\n");
	printf("Enter your choice(0-2):");
	scanf("%d",&i);

	switch (i)
	{
	case 0:
		printf("%s:STOP\n",arr[i]);
		break;
	case 1:
		printf("%s:WAIT\n",arr[i]);
		break;
	case 2:
		printf("%s:GO\n",arr[i]);
		break;
	default:
		printf("Invalid traffic signal\n");
	}
	return 0;
}



	

	
		


