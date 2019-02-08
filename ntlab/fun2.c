#include<stdio.h>


int fun(int i)
{
	printf("\n i : %d", i );
	if ( i => 0 && i <= 100 )
		i = fun ( fun ( i + 11 ) );
	else if (i > 100)
		i = i - 10;
	else
		printf("Invalid Input");
	return i;
}

void p(int a)
{
	printf("\nResult is : %d\n\n",fun(a));
}
int main()
{
	int x;
	printf("Enter value of X : ");
	scanf("%d",&x);
	p(x);
}
