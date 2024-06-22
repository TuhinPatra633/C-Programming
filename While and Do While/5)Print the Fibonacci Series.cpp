/*Print the Fibonacci Series*/
#include<stdio.h>
int main()
{
	int n,i=1,a=0,b=1,c;
	printf("How many terms do you want in this series:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		c=a+b;
		printf("%d  ",a);
		a=b;
		b=c;
		i=i+1;
	}
	return 0;
}
/*OUTPUT
How many terms do you want in this series:
9
0  1  1  2  3  5  8  13  21
*/
