#include<stdio.h>
#include<stdlib.h>

long double fact(long double y)
{
	if(y < 2)
		y = 1;
	else
		y = y * fact( y - 1);
	return y;
}

long double comp(long double x)
{
	return (fact(x+1)+2);
}

void pri(long double a)
{
	printf("\n\nn consecutive composite numbers are : \n");
	long double x = comp(a);
	for(int i=0;i<a;i++)
	{
		printf("\n[%d.] %.0Lf",i+1,x+i);
	}
	printf("\n\n");
}

void main()
{
	long double n;
	printf("Enter the value of n : \n");
	scanf("%Lf",&n);
	pri(n);
}

