#include<stdio.h>

long double cat(long double x, int count)
{
	long double c;
	count--;
	if ( x == 0 )
	{ 
		c = 1.0;
//		printf("\ncatalan number %d : %.0Lf",count,c);
	}
	else if ( x >= 1.0 )
	{
		c = ((4.0*x - 2.0) / (x + 1.0)) * cat(x-1,count);
//		printf("\ncatalan number %d : %.0Lf",count,c);
	}
	else
		printf("\n\nInvalid Input !!! ");
	return c;
}

void pri(long double a)
{
	int count = a+1;
	printf("\n\nThe catalan number C[%.0Lf] is %.0Lf\n\n",a, cat(a, count));
}

long double fact(long double a)
{
	long double x;
	if ( a == 1)
		x = 1;
	else if ( a > 1)
	{
		x = a * fact (a-1);
//		printf("\n x = %.0Lf\n",x);
	}
	return x;
}

long double formula(long double n)
{
	long double c;
	c = ( 1.0 / ( n + 1.0 ) ) * ( fact(2*n) / ( fact(n) * fact(n) ));
	return c;
}

void catformula(long double n)
{
	printf("\n\nThe value  of Catalan number %.0Lf by formula is %.0Lf\n\n",n, formula(n));
}
 
void main()
{
	long double n;
	printf("\n\nEnter the value of n \n");
	scanf("%Lf",&n);
	pri(n);
	catformula(n);
}
