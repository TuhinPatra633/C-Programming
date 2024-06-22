/*Print Pyramid*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=n;j>i;j=j-1)
		{
			printf(" ");
		}
		for(k=1;k<=i;k=k+1)
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

*/
