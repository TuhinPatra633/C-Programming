/*Print the sum of the digits of an integer*/
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter any Number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of Digits= %d",sum);
	return 0;
}
/*OUTPUT
Enter any Number:
4567
Sum of Digits= 22*/
