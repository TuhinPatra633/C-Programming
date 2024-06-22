/*Write a C-programme to find first nth terms of the fibonacci sequence*/
#include<stdio.h>
int main()
{
	int n,i;
	int x[50];
	printf("How many terms do you want?\n");
	scanf("%d",&n);
	x[1]=0;
	x[2]=1;
	for(i=3;i<=n;i=i+1)
	{
		x[i]=x[i-1]+x[i-2];
	}
	printf("The sequence is: \n");
	for(i=1;i<=n;i=i+1)
	{
		printf("%d ",x[i]);
	}
	return 0;
	
}
/*OUTPUT
How many terms do you want?
21
The sequence is:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
*/
