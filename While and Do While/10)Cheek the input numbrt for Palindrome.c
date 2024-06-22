/*Cheek the input numbrt for Palindrome*/
#include<stdio.h>
int main()
{
	int n,r,c,s=0;
	printf("Enter any Number: ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
		printf("Yeah bro!it is a Palindrome number");
	else
		printf("Nah,nah it is not a Palindrome number");
	return 0;
}
/*OUTPUT
Enter any Number: 1256521
Yeah bro!it is a Palindrome number*/
