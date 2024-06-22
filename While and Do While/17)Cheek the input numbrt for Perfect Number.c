/*Cheek the input numbrt for Perfect Number*/
#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter any Number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		s=s+i;
		i=i+1;
	}
	if(s==n)
		printf("Yeah bro!it is a Perfect Number");
	else
		printf("Nah,nah it is not a Perfect Number");
	return 0;
}
/*OUTPUT
Enter any Number: 496
Yeah bro!it is a Perfect Number*/
