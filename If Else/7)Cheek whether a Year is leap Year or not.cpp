/*Cheek whether a Year is leap Year or not*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any Year\n");
	scanf("%d",&a);
	if(a%4==0 || a%100==0 && a%400==0)
	{
		printf("%d is a leap Year",a);
	}
	else
	{
		printf("%d is not a leap Year",a);
	}
	return 0;
}
/*Output
Enter any Year
2022
2022 is not a leap Year*/
