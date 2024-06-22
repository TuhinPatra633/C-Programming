/*Cheek whether a Number is odd or even*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any Number\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is a even Number",a);
	}
	else
	{
		printf("%d is a odd Number",a);
	}
	return 0;
}
/*Output
Enter any number
49
49 is a odd Number*/
