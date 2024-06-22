/*Print half Pyramid with Alphabets*/
#include<stdio.h>
int main()
{
	
	int i,n,j;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		char ch='A';
		for(j=1;j<=i;j=j+1)
		{	printf("%c ",ch);
			ch=ch+1;
		}
		printf("\n");
	}
	return 0;
}

/*OUTPUT
Enter no. of rows
9
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
A B C D E F G H
A B C D E F G H I
*/
