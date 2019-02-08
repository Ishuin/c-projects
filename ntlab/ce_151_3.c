#include<stdio.h>

void card(int x)
{
    int c[3][12], i, j;
    for( i = 0; i <= 3; i++ )
        for( j = 0 ; j <= 12; j++ )
        {
            if ( x == ((i*13) + j) )
                printf("\n\nx is the value\n\n");
        }
}

void main()
{
    int x;
    printf("\nEnter card number from 0 to 51\n");
    scanf("%d",x);
    card(x);
}
