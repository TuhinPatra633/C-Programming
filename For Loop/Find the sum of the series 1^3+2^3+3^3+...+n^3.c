/*Find the sum of the series 1^3+2^3+3^3+...+n^3*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i*i*i;
	}
	printf("Sum=%d",sum);
}
/*Output
Enter n: 5
Sum=225*/
