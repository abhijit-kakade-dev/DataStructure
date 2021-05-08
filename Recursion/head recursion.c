
#include<stdio.h>
#include<stdlib.h>

void display(int n);

int main()
{
    printf("\n Lets start the head recursion");

    display(10);

    return 0;

}
void display(int n)
{
    if( n > 0)
    {
        display( n-1 );
        printf("\n %d", n);

    }
        
}