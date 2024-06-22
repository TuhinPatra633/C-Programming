/*Write a C-programme to input any 10 numbers and print their product*/
#include<stdio.h>
int main()
{
	int i;
	float a[50],p=1.0;
	printf("Enter any 10 numbers\n");
	for(i=0;i<10;i=i+1)
	{
		scanf("%f",&a[i]);
		p=p*a[i];
	}
	printf("Display the numbers \n");
	for(i=0;i<10;i=i+1)
	{
		printf("%f\n",a[i]);
	}
	printf("product of 10 numbers=%f\n",p);
	return 0;
}
