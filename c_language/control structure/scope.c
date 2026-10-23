#include<stdio.h>
int global=10;
void display()


{
	static int s=0;
	int load =5;
	s++;
	local++;
	printf("Global varaible=%d\n",global);
	printf("local variable=%d\n",local);
	printf("Static variable=%d\n",s);
	printf("\n");
}
int main()
{
	display();
	display();
	display();
	return 0;
}



