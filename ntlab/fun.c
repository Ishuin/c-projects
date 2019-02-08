#include<stdio.h>

int func(int x) 
{
	if (x>100)
	{
		x=x-10;
	}
	else if (0<=x<=100)
	{	
		x=func(func(x+11));
	}
	return x;
}

int main()
{
	int a,j;
	printf("Enter value of x : ");
	scanf("%d", &a);
	j = func(a);
	printf("Result value of function : %d",j);
	printf("\n\n");
	return 0;

}
