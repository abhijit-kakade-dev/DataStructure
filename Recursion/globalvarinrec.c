
#include<stdio.h>
#include<stdlib.h>

int display( int n );
//int x;
int main()
{
    int result, a = 10;
    
    printf("\n Lets start.");
    
    result = display( a );
    
    printf("\n The total sum =%d", result);
    
    return 0;
    
}

int display( int n )
{
    static int x = 0;
    
    if( n > 0 )
    {
        x++;
        return display( n - 1 ) + x;
    }
    return 0;
    
}