#include<stdio.h>

void test (int x)
{
	int y = 1, i;
	for ( i=0 ; i<4 ; i++ )
	{
		y = y * (x + i);
	}
	printf("\nProduct of consecutive numbers is %d\n",y);
	if ( y % 4 == 0)
		printf("\nthe product of 4 consecutive numbers from %d to %d is divisible by 4\n\n", x, x+3);
}
	

void main()
{
	int l;
	printf("\n\nEnter first number : ");
	scanf("%d",&l);
	test(l);
}
