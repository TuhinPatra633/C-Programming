/*Enter any 10 number and print their sum*/
#include<stdio.h>
int main()
{
	float i=1,n,sum=0.0;
	printf("Enter any 10 the Numbers: \n");
		while(i<=10)
	{
		scanf("%f",&n);
		sum=sum+n;
		i=i+1;
	}
	printf("Sum=%f",sum);
	return 0;
}
/*OUTPUT
Enter any 10 the Numbers:
1
2
3
4
5
6
7
8
9
1
Sum=46.000000
*/
