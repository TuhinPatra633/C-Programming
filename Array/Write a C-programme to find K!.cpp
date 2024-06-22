/*Write a C-programme to find K!*/
#include<stdio.h>
int main()
{
	int k,i;
	int fact[50];
	printf("Enter the value of k\n");
	scanf("%d",&k);
	fact[1]=1;
	for(i=2;i<=k;i=i+1)
	{
		fact[i]=i*fact[i-1];
	}
	printf("%d!=%d",k,fact[k]);
	return 0;
}
