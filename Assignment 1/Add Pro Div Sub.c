#include<stdio.h>
int main()
{
	float a,b,add,pro,div,sub;
	printf("ENTER ANY TWO NUMBERS\n");
	scanf("%f%f",&a,&b);
	add=a+b;
	pro=a*b;
	div=a/b;
	sub=a-b;
	printf("ADDITION OF %f AND %f IS %f",a,b,add);
	printf("PRODUCT OF %f AND %f IS %f",a,b,pro);
	printf("DIVISION OF %f AND %f IS %f",a,b,div);
	printf("SUBSTRACT OF %f AND %f IS %f",a,b,sub);
	return 0;

}

