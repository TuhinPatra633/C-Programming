#include<math.h>
#include<stdio.h>
int main()
{
	float x,y,f;
	printf("Enter any two numbers\n");
	scanf("%f%f",&x,&y);
	f=3*pow(x,2)+2*pow(y,2)+5*x+3*y+10;
	printf("The value of the function is %f",f);
	return 0;
}
