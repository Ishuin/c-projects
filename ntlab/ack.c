#include<stdio.h>

int ack(int x, int y)
{
	if( x == 0 )
		y = y+1;
	else if ( y == 0 )
		y = ack( x-1, 1 );
	else
		y = ack( x-1, ack( x, y-1 ));
	return y;
}

void p(int a, int b)
{
	printf("\n\nResult is %d\n\n",ack(a,b));
}

int main()
{
	int x,m,n;
	printf("\nEnter the value of m : ");
	scanf("%d",&m);
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	p(m,n);
}
