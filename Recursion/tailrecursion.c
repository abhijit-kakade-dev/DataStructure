
#include<stdio.h>
#include<stdlib.h>

void display( int n );

int main()
{
    printf("\n Let's start the tail recursion.");

    display(10);

    return 0;

}
void display( int n )
{
    if( n > 0 )
    {

    printf("%d\n", n);
    display( n-1 );

    }
    
}