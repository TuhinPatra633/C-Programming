/*Find the sum of the series 1+1/3^2+1/5^2+.....+1/n^2*/
#include<stdio.h>
#include<math.h>
int main()
{
	double i,sum=0,n;
	printf("Enter n: ");
	scanf("%lf",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+(1/pow(2*i-1,2));
	}
	printf("Sum is %lf",sum);
}
