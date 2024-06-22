/*AREA AND PERIMETER OF A RECTANGLE*/
#include<stdio.h>
int main()
{
	float a,b,A,S;
	printf("Enter the length and width\n");
	scanf("%f*%f",&a,&b);
	A=a*b;
	S=2*(a+b);
	printf("AREA=%f,PERIMETER=%f",A,S);
	return 0;
}
