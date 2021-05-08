
#include<stdio.h>
#include<stdlib.h>

int summation( int );

int main()
{
    int n; 
    //int sum;

    printf("Enter a number to calculate the sum of first n numbers");
    scanf("%d", &n);

    //sum = summation(n);

    printf("\nSum of first %d numbers = %d\n", n, summation(n));

    return 0;

}
int summation( int n )
{
    if(n > 0)
    {
        return summation(n - 1) + n;
    }

}