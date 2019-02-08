#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("\nEnter a value x : ");
	int x,i;
	scanf("%d",&x);
	int p[x]=(2,3,5,7);

	for(i=4;i<=x;i++)
		p[i]=0;
}
