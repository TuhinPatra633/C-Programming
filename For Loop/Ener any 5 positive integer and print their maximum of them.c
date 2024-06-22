/*Ener any 5 positive integer and print their maximum of them*/
#include<stdio.h>
int main()
{
int i,a,max=0;
printf("Enter any 5 positive integer:\n");
for(i=1;i<=5;i=i+1)
{
	scanf("%d",&a);
	if(a>=max)
	max=a;
}
printf("maximum is %d",max);
	
}
