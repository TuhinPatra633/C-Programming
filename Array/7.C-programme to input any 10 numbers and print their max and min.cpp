/*Write a C-programme to input any 10 numbers and print their max and min*/
#include<stdio.h>
int main()
{
	int i;
	float a[50],max=0.0,min=0.0;
	printf("Enter any 10 numbers\n");
	for(i=0;i<10;i=i+1)
	{
		scanf("%f",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i=i+1)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Display the numbers \n");
	for(i=0;i<10;i=i+1)
	{
		printf("%f\n",a[i]);
	}
	printf("maximum number is %f\n",max);
	printf("minimum number is %f\n",min);
	return 0;
}

