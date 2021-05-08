
#include<stdio.h>
#include<stdlib.h>

int sum( int n );

int main()
{
    int n, result;

    printf("\nEnter the number to calculate sum.");
    scanf("%d", &n);

    //result = sum( n );

    printf("\n The sum of first %d numbers = %d\n", n, sum( n ));

    return 0;

}

int sum( int n )
{
    if( n > 0 )
    {
        return sum( n - 1 ) + n;
    }

    return 0;

}