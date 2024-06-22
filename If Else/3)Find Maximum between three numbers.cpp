/*Find Maximum between three numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is maximum",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is maximum",b);
	}
	else if(c>a && c>b)
	{
		printf("%d is maximum",c);
	}
	else
	{
		printf("Sorry! %d,%d and %d made for each other",a,b,c);
	}
	return 0;
}
/*Output
 Enter any three number
5665
22
-465
5665 is maximum*/
