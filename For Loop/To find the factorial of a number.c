/*To find the factorial of a number*/
#include<stdio.h>
int main()
{
int i,fact=1,n;
printf("Enter any positive number : \n");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
fact=fact*i;
printf("The factorial of %d is %d",n,fact);
return 0;
}
