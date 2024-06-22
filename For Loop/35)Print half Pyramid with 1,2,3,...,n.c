/*Print half Pyramid with 1,2,3,...,n*/
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
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

/*OUTPUT
Enter no. of rows
12
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10 11
1 2 3 4 5 6 7 8 9 10 11 12

*/
