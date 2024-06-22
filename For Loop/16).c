/*Find the sum of 1+1/1!+1/2!+1/3!+....+1/n!*/
#include<stdio.h>
main()
{
	double i,fact=1,sum=1,n;
	printf("Enter n : ");
	scanf("%lf",&n);
	for(i=1;i<=n;i=i+1)
	{
		fact=fact*i;
		sum=sum+(1/fact);
	}
	printf("Sum is %lf",sum);
}
