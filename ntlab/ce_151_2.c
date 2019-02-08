#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void vgen(int a)
{
	int x[a], i, j, k, sum, y[a], m;
	time_t t;
	srand((unsigned) time(&t));
	for( i = 0 ; i < a ; i++ )
	{
		x[i] = rand()%100;
		if( x[i] < 0 )
			x[i] = x[i]* (-1);
	}

	printf("\n\t%d Random Values generated are : \n",a);
	for( i = 0 ; i < a ; i++ )
		printf("\n\t%d",x[i]);
	printf("\n");

	for( i = 0 ; i < a ; i++ )
	{
		for( k = i; k < a ; k ++ )
		{
			sum = x[i];
//			printf("\ni : %d; k : %d",i,k);
			for( j = k + 1 ; j < a ; j++ )
			{
				y[j] = x[j];
				sum = sum + x[j];
				printf("\nsum : %d\n", sum);
				if( sum % a == 0 )
				{
					printf("\n%d\n",x[i]);
					for( m = k+1 ; m <= j ; m++ )
						if( y[m] != 0 )
							printf("%d\n", y[m] );
				}
			}
		}
	}
}


void main()
{
	int n;
	printf("\n\nEnter any value for n : ");
	scanf("%d",&n);
	vgen(n);
}
