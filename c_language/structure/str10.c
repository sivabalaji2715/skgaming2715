#include<stdio.h>
struct engine
{
	int engine_no;
	float capacity;
	char fuel_type[20];
};
struct car
{
	char car_name[50];
	int model;
	struct engine e;
};
int main()
{
	struct car c;
	printf("Enter car name");
	scanf("%19s",c.car_name);
	printf("Enter car model");
	scanf("%d",&c.model);
	printf("Enter engine_number");
	scanf("%d",&c.e.engine_no);
	printf("Enter engine capacity");
	scanf("%f",&c.e.capacity);
	printf("Enter fuel_type");
	scanf("%19s",c.e.fuel_type);
	printf("Car details\n");
	printf("Car name:%s\n",c.car_name);
	printf("Car model:%d\n",c.model);
	printf("Engine details\n");
	printf("Engine number:%d\n",c.e.engine_no);
	printf("Engine capacity:%1.f CC\n",c.e.capacity);
	printf("Fuel_type:%s\n",c.e.fuel_type);
	return 0;
}

