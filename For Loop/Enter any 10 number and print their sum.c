/*Enter any 10 number and print their sum*/
#include<stdio.h>
int main()
{
	int i,s=0,j;
	printf("Enter any 10 Numbers: \n");
	for(i=1;i<=10;i=i+1)
	{
		
		scanf("%d",&j);
		s=s+j;
	}
	
	printf("Sum is %d",s);
	return 0;
}
