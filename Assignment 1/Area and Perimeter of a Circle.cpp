#include<stdio.h>
#include<math.h>
int main()
{
	float r,area,perimeter;
	printf("Enter the radius\n");
	scanf("%f",&r);
	area=4*atan(1)*r*r;
	perimeter=8*atan(1)*r;
	printf("AREA=%f and PERIMETER=%f",area,perimeter);
	return 0;
	}
