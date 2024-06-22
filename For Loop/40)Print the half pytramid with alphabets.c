/*Print half Pyramid with Alphabets*/
#include<stdio.h>
int main()
{
	
	int i,n,j;
	char ch='A';
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
			printf("%c ",ch);
			ch=ch+1;
		printf("\n");
	}
	return 0;
}

/*OUTPUT
Enter no. of rows
5
A
B B
C C C
D D D D
E E E E E
*/
