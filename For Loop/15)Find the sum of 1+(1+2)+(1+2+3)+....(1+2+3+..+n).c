/*Find the sum of 1+(1+2)+(1+2+3)+....(1+2+3+..+n)*/
#include<stdio.h>
int main()
{
	int i,s=0,t=0,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		s=s+i;
		t=t+s;
	}
	printf("Sum is %d",t);
}
/*Output
Enter n : 5
Sum is 35*/
