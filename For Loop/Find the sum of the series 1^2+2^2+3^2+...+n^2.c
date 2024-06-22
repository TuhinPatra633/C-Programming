/*Find the sum of the series 1^2+2^2+3^2+...+n^2*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i*i;
	}
	printf("Sum=%d",sum);
}
/*Output
Enter n: 5
Sum=55*/
