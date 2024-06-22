/*Factors of a positive integer*/
#include<stdio.h>
int main()
{
	int n,i,b;
	printf("Enter a Positive integer : ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		if(n%i=0)
	{
			printf("Factors are: %d",i);
		}
	}
	return 0;
}
