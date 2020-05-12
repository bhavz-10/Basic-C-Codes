#include<stdio.h>

#define PI 3.14159625

int main()
{
	double radius;
	double area,perimeter;

	printf("\n\nPlease enter the radius:\n");
	scanf("%lf",&radius);

	area = PI*radius*radius;
	perimeter = 2*radius*PI;

	printf("\n\nAREA = %lf",area);
	printf("\nPERIMETER = %lf\n\n",perimeter);

	return 0;
}
