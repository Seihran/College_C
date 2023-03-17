#include <stdio.h>

float area_tri(float base, float height);

void main()
{
	float base = 0;
	float height = 0;
	float area = 0;

	printf("Enter base dimensions: ");
	scanf("%f", &base);
	printf("Enter height dimensions: ");
	scanf("%f", &height);

	printf("The area is %0.2f", area_tri(base, height));
}

float area_tri(float base, float height)
{
	float area = 0;

	return area = 0.5*(base*height);
}