/*Print the product of the digits of an integer*/
#include<stdio.h>
int main()
{
	int n,r,pro=1;
	printf("Enter any Number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		pro=pro*r;
		n=n/10;
	}
	printf("Product of Digits= %d",pro);
	return 0;
}
/*OUTPUT
Enter any Number:
458967
Product of Digits= 60480*/
