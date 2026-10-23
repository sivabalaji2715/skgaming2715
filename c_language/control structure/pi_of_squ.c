#include<stdio.h>
int main()
{
	const float pi =3.14;
	float radius;
	float area;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area =pi*radius*radius;
	printf("Area of the circle = %.2f\n",area);
	return 0;
}
