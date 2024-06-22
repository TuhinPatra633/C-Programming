/*Write a C-programme to input any 10 numbers and display them*/
#include<stdio.h>
int main()
{
	int i;
	float a[50];
	printf("Enter any 10 numbers\n");
	for(i=0;i<=10;i=i+1)
	{
		scanf("%f",&a[i]);
	}
	printf("Display the numbers \n");
	for(i=0;i<=10;i=i+1)
	{
		printf("%f\n",a[i]);
	}
	return 0;
	
}
/*OUTPUT
Enter any 10 numbers
1.2
5.5
53.5
653.5
356.55
632.5
323.5
332.2
56.4
0.5
46.5
Display the numbers
1.200000
5.500000
53.500000
653.500000
356.549988
632.500000
323.500000
332.200012
56.400002
0.500000
46.500000
*/
