#include<math.h>
#include<stdio.h>
int main()
{
float x,f;
printf("Enter any number\n");
scanf("%f",&x);
f=x*x+exp(2*x)+4-sinh(3*x);
printf("f(x)=%f",f);
return 0;
}

