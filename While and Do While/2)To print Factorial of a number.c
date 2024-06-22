/*To print Factorial of a number*/
#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("Enter the Number: \n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("%d! =%d",n,fact);
	return 0;
}
/*OUTPUT
Enter the Number:
9
9! =362880
*/
