
// To calculate the sum of digits in a number.


#include<stdio.h>
#include<stdlib.h>

int SOD(int n);

int main()
{
    int n;
    
    printf("Enter a number to calculate the sum of digits in it.\n");
    scanf("%d", &n);
    
    printf("Let's Start::");
    
    printf("\nThe sum of digits in '%d' = %d", n, SOD(n));
    
    return 0;
    
}

int SOD(int n)
{
    if(n == 0)
        return 0;
    else
        return SOD(n / 10) + n % 10;
    
}


