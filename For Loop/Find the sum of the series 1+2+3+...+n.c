/*Find the sum of the series 1+2+3+...+n*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the last number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
/*Output
Enter the last number
9
sum=45*/
