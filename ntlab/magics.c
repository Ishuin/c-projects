#include<stdio.h>

void inp(int n)
{
	int x[n][n], i, j ;
	printf("\nEnter values in the square at : ");
	for ( i=1 ; i<=n ; i++ )
		for ( j = 1 ; j <= n ; j++ )
		{
			printf("[%d] [%d] : ", i, j );
			scanf("%d", &x[i][j] );
		}
	out(n,x);
}

void out(int n,int x[n][n])
{
	int i, j ;
	printf("\nValues in the square are : ");
	for ( i=1 ; i<=n ; i++ )
	{
		printf("\n\n");
		for ( j = 1 ; j <= n ; j++ )
			printf("\t%d", x[i][j] );
	}
	printf("\n\n");
}




int main()
{
	int n;
	printf("\nEnter size of magic square : ");
	scanf("%d",&n);
	inp(n);
}
