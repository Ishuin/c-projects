#include<stdio.h>
#include<stdlib.h>

void diac(int n, int x[n][n], int a)
{
	int count=0, i, j;
	int d1 = 0, d2 = 0;
	for( i=1 ; i <= n ; i ++ )
	{
		for( j = 1 ; j <= n ; j++ )
		{
			if ( (i - j) == 0 )
			{
				d1 = d1 + x[i][j];
			}
			if ( (i + j) == (n+1) )
			{
				d2 = d2 + x[i][j];
			}
		}
	}
	printf("\n\ndiagonal 1 : %d; diagonal 2 : %d",d1,d2);
	if( d1 == a && d2 == a )
		printf("\n\n This matrix is a magic square ");
	else
		printf("\n\n This matrix is not a magic square ");
}

void colc(int n, int x[n][n], int a)
{
	int count=0, i, j;
	for ( i=1 ; i<=n ; i++ )
	{
		int c = 0;
		for ( j = 1 ; j <= n ; j++ )
		{
			c = c + x[j][i];
			count++;
			printf("\ncolumn [%d%d] : %d; count : %d",j,i,c,count);
		}
		if ( a != c)
		{
			printf("\n a : %d; c : %d",a,c);
			printf("\n\nNot a magic square!");
			exit(0);
		}
		else
			printf("\n\ncolumn %d matches\n", i);
	}
	diac(n,x,a);
}

void rowc(int n, int x[n][n])
{
	int a, count=0, i, j;
	for ( i=1 ; i<=n ; i++ )
	{
		int r = 0;
		for ( j = 1 ; j <= n ; j++ )
		{
			r = r + x[i][j];
			count++;
			printf("\nrow [%d%d] : %d; count : %d",i,j,r,count);
		}
		if (count == n)
		{
			a = r;
			printf("\n\nsum of first row : %d\n",a);
		}
		if (count > n)
		{
			if ( a != r)
			{
				printf("\n a : %d; row %d : %d",a,i,r);
				printf("\n\nNot a magic square!");
				exit(0);
			}
			else
				printf("\n\nRow %d  matches\n",i);
		}
	}
	colc(n,x,a);
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
	rowc(n,x);
}


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


int main()
{
	int n;
	printf("\nEnter size of magic square : ");
	scanf("%d",&n);
	inp(n);
	printf("\n\n");
}

