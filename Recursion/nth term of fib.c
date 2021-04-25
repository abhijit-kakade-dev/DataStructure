
#include<stdio.h>
#include<stdlib.h>

long fibonacci( int n );

int main()
{
    int n;
    long nthterm;
    
    printf("Enter which term of fibonacci series are required\n ");
    scanf("%d", &n);
    
    nthterm = fibonacci(n);
    
    printf("The %dth term = %lu \n", n, nthterm);
    
    return 0;
}
long fibonacci( int n )
{
    if(n <= 1)
        return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
    
}