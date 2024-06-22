/*Write a C-programme to find nCr*/
#include<stdio.h>
int main()
{
	int n,r,nCr,i;
	int fact[50];
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	fact[1]=1;
	for(i=2;i<=n;i=i+1)
	{
		fact[i]=i*fact[i-1];
	}
	nCr=fact[n]/(fact[r]*fact[n-r]);
	printf("%dC%d=%d",n,r,nCr);
	return 0;
}
/*OUTPUT
Enter the value of n and r
9
5
9C5=126*/
