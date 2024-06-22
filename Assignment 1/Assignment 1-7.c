#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,s,A;
	printf("Enter the length of sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle is %f",A);
	return 0;
	
}
