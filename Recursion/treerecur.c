
#include<stdio.h>
#include<stdlib.h>

void display( int n );

int main()
{
    int a = 5;

    printf("Let's start the tree recursion.");

    display( a );

    return 0;

}

void display( int n )
{
    if( n > 0 )
    {
        printf("%d ", n);

        display( n - 1 );

        display( n - 1 );

    }
}