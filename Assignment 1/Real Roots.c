/*REAL ROOTS OF QUADRATIC EQUATION*/
#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,d,x,y;
	printf("Enter the Co-efficient of x^2,x and constant\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf("ROOTS ARE %f AND %f",x,y);
		}
	else
	{
		printf("NO REAL ROOTS");
			}		
	return 0;
}
