/*Print the Fibonacci Series*/
#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,c;
	printf("How many terms do you want in this series:\n");
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{
		c=a+b;
		printf("%d",a);
		a=b;
		b=c;
		
	}
}
