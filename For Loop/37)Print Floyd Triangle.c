/*Print Floyd Triangle*/
#include<stdio.h>
int main()
{
	int i,j,n,count=1;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
		{
			printf("%d ",count);
			count=count+1;
		}
		printf("\n");
	}
	return 0;
}

/*OUTPUT
Enter no. of rows
12
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54 55
56 57 58 59 60 61 62 63 64 65 66
67 68 69 70 71 72 73 74 75 76 77 78
*/
