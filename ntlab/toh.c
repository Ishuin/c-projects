#include<stdio.h>

int tower(int d)
{
	int swaps;
	if (d == 1 )
		swaps = 1;
	else if ( d > 1 )
		swaps = 2 * tower(d-1) + 1;
	else
		printf ("\n\nINVALID INPUT!!!\n\n ");
}

void pri(int a)
{
	printf("\n\nNumber of swap operations will be %d\n\n",tower(a));
}

void main()
{
	int x;
	printf("\nEnter number of disks in the tower ");
	scanf("%d",&x);
	pri(x);
}
