//a program to find two numbers, which when squared and summed up, gives 1105 as the result.

#include<stdio.h>
#include<stdlib.h>

void output(int a)
{
	int i, j;
	printf("\n~~~ %d ~~~ ", a);
	for ( i = 1; i < a ; i++)
		for ( j = 1; j < a ; j++)
		{
			if ( (i*i + j*j) == a )
					printf("\n%d + %d = %d\n",i*i, j*j, a);
		}
}


void main()
{
	int x = 1105;
	printf("\n1105 is the sum of following squares \n\n" );
	output(x);
}
