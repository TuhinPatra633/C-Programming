/*Find Maximum between two numbers*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two number\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is maximum",a);
	}
	else if(b>a)
	{
		printf("%d is maximum",b);
	}
	else
	{
		printf("Sorry! %d and %d made for each other",a,b);
	}
	return 0;
}
/*Output
Enter any two number
89
-45
89 is maximum*/
