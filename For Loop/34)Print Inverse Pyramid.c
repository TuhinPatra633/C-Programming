/*Print Pyramid*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<i;j=j+1)
		{
			printf(" ");
		}
		for(k=n;k>=i;k=k-1)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/*OUTPUT
Enter no. of rows
11
* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *


*/
