

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void prime(int, int);

int main()
{
    int n, k;
    
    printf("Enter a number to check whether it is a prime or not.\n");
    scanf("%d", &n);
    
    printf("Let's check::\n");
    
    k = (int)sqrt(n);
    
    printf("%d\n", k);
    
    prime(n, k);
    
    return 0;
    
}

void prime(int n, int i)
{
    if( i == 1 || n == 2)
    {
        printf("%d is a PRIME NUMBER.", n);
        return;
    }
    else
    {
        if(n % i == 0)
            printf("%d is NOT a PRIME NUMBER", n);
        else
        {
            prime(n, i--);
        }
    }
}
