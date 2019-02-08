#include<stdio.h>

int ackr(int x, int y);

int main()
{
	int m,n,i,j;
	printf("enter value of m : ");
	scanf("%d",&m);
	printf("enter value of n : ");
	scanf("%d",&n);
	i=ackr(m,n);
	printf("result output : %d", i);
	printf("\n\n");
	return 0;
}


int ackr(int x, int y)
{
	int a=0;
	printf("x: %d; y: %d", x, y);
	printf("\n\n");
	if(x==0)
	{
		y=y+1;
		printf("y1 : %d",y);
		printf("\n\n");
	}
	else if (y==0)
	{
		y=ackr(x-1,1);
		printf("y2 : %d",y);
		printf("\n\n");
	}
	else
	{
		y=ackr(x,y-1);
		printf("y3 : %d",y);
		printf("\n\n");
		y=ackr(x-1,y);
		printf("y4 : %d",y);
		printf("\n\n");
	}
	return y;
}

