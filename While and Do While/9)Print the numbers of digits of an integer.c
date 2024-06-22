/*Print the numbers of digits of an integer*/
#include<stdio.h>
int main()
{
	int n,r,count=0;
	printf("Enter any Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	printf(" Total numbers od Digits: %d",count);
	return 0;
}
/*OUTPUT
Enter any Number: 864354
 Total numbers od Digits: 6*/
