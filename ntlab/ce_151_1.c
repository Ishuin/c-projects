#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void vgen(int b)
{
	int x[b+1], i, j;
	time_t t;
	srand((unsigned) time(&t));
	for(i=0;i<=b;i++)
		x[i] = rand();
	for(i=0;i<=b;i++)
		printf("\n%d",x[i]);

	for(i=0;i<=b;i++)
		for(j=i+1;j<=b;j++)
			if( ( ( x[i] - x[j] ) % b == 0 ) && ( x[i] != x[j] ) )
				printf("\n\n%d and %d are the two numbers whose difference is divisible by %d\n\n",x[i],x[j],b);
}


void main()
{
	int b;
	printf("\n\nEnter any value for b : ");
	scanf("%d",&b);
	vgen(b);
}
