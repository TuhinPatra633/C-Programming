/*To print Alphabets from a to z*/
#include<stdio.h>
int main()
{
	char ch='a';
	printf("All the alphabets from a z are: \n");
	while(ch<='z')
	{
		printf("%c  ",ch);
		ch=ch+1;
	}
	return 0;
}
/*OUTPUT
All the alphabets from a z are:
a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z*/
