/*Find the sum of first and last digits of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a,b,count=0;
	printf("Enter any Number: ");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	a=m%10;
	b=m/pow(10,count-1);
	printf("Sum of first and last digit is %d",a+b);
	return 0;
}
/*OUTPUT
Enter any Number: 4567
Sum of first and last digit is 11*/
