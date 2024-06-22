/*Cheek the input numbrt for Armstrong Number*/
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
		s=(r*r*r)+s;
		n=n/10;
	}
	if(c==s)
		printf("Yeah bro!it is a Armstrong Number");
	else
		printf("Nah,nah it is not a Armstrong Number");
	return 0;
}
/*OUTPUT
Enter any Number: 371
Yeah bro!it is a Armstrong Number*/
