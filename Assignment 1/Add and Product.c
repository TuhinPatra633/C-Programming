#include<stdio.h>
int main()
{
	int i,j,b,c,a;
	i=4;
	j=2;
	a=1;
	b=2;
	c=+j++;
	a+=i--;
	j++;
	b+=a+i++;
	printf("%d %d %d %d %d",a,b,c,i,j);
	}
