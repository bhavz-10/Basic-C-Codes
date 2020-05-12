#include<stdio.h>

#define PI 3.14159625

int main()
{
	double radius=5.67;
	double area,perimeter;

	area = PI*radius*radius;
	perimeter = 2*radius*PI;

	printf("AREA = %lf",area);
	printf("PERIMETER = %lf",perimeter);

	return 0;
}
