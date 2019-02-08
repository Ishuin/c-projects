#include<stdio.h>

int hands(int n)
{
	int h;
	if ( n == 1 )
	{
		h = 0;
	}
	else if ( n > 1 )
	{
		h = n-1 + hands(n-1);
	}
	else
		printf("Invalid Input ");
	return h;
}		

void pri(int a)
{
	printf("\ntotal handshakes are %d\n\n",hands(a));
}

int main()
{
	int n;
	printf("\nEnter number of people : ");
	scanf("%d",&n );
	pri(n);
}
