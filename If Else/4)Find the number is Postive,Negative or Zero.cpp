/*Find the number is Postive,Negative or Zero*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is Positive",a);
	}
	else if(a<0)
	{
		printf("%d is Negative",a);
	}
	else
	{
		printf("%d is equal to zero",a);
	}
	return 0;
}
/*Output
Enter any number
-89
-89 is Negative*/
