/*Cheek whether a number is divisible by 5 and 11 or not*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number\n");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("%d is divisible by 5 and 11",a);
	}
	else
	{
		printf("%d is not divisible by 5 and 11",a);
	}
	return 0;
}
/*Output
Enter any number
55
55 is divisible by 5 and 11*/
