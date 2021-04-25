
#include<stdio.h>
#include<stdlib.h>

void display( int n );

int main()
{
    printf("Let's do the program of head & tail recursion.\n");
    
    display(10);
    
    return 0;
    
}
void display( int n )
{
    if( n > 0 )
    {
        printf("%d\n", n);
        
        display( n-1 );
        
        printf("%d\n", n);
        
    }
}