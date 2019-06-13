//program to find larger value among two values using comparison

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter value a and b");
	scanf("%d,%d",&a,&b);
	if(a<b)
		printf("b is greater");
	else if(a>b)
		printf("a is greater");
	else
		printf("a is equal to b");
	return 0;
}
