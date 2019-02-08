#include<stdio.h>

int couphand(int n)
{
	int h;
	if ( n == 2 )
	{
		h = 4;
	}
	else if ( n > 2 )
	{
		h = 4 * ( n - 1 ) + couphand ( n - 1 );
	}
	else
		printf("Invalid Input ");
	return h;
}		

void pri(int a)
{
	printf("\ntotal handshakes between couples are %d\n\n",couphand(a));
}

int main()
{
	int n;
	printf("\nEnter number of couples : ");
	scanf("%d",&n );
	pri(n);
}
