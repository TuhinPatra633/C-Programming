/*Find the sum of the series 1*2+2*3+3*4+....n*(n+1)*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i*(i+1);
	}
	printf("Sum=%d",sum);
}
/*Output
Enter n : 6
Sum=112*/
