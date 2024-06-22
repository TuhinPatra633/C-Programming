/*Print half Pyramid*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

/*OUTPUT
Enter no. of rows
15
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * * * *
 * * * * * * * *
 * * * * * * * * *
 * * * * * * * * * *
 * * * * * * * * * * *
 * * * * * * * * * * * *
 * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * *
*/
