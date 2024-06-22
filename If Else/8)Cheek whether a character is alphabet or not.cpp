/*Cheek whether a character is alphabet or not*/
#include<stdio.h>
int main()
{
	char a;
	printf("Enter any Character\n");
	scanf("%c",&a);
	if('a'<=a && a<='z' || 'A'<=a && a<='Z' )
	{
		printf("%c is an Alphabet",a);
	}
	else
	{
		printf("%c is not an Alphabet",a);
	}
	return 0;
}
/*Output
Enter any Character
S
S is a Alphabet*/
