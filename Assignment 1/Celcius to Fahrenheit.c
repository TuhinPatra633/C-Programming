#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Fahrenheit\n");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("Temperature in Celcius=%f",c);
	return 0;
}
