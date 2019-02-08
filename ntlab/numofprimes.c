#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int primes(int p)
{
	int pr[p], i, y = 0 ;
	pr[0] = 2;
	for( i = 2; i <= p; i++ )
	{
		for( m = 0 ; m <= y ; m++ )
			if ( i % pr[m] == 0 )
				break;
			p[++y] = i;
	}
}

/*

int numprimes(int b)
{
	for( i = 0 ; i < b ; i++ )
	{
		

void pri(int x)
{
	printf("\nThe number of primes under %d are %d\n\n",x, numprimes(x));
}


*/

void main()
{
	int a;
	printf("\nEnter the number to find number of primes from zero to the number \n");
	scanf("%d",&a);
	primes(a);
}
