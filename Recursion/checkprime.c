
// check the prime number

#include<stdio.h>
#include<stdlib.h>

void prime(int, int);

int main()
{
    int n;
    
    printf("Enter a number to check whether it is a prime or not.\n");
    scanf("%d", &n);
    
    printf("Let's check::\n");
    
    prime(n, n/2);
    
    return 0;
    
}

void prime(int n, int i)
{
    if(i == 1 || n == 2)
    {
        printf("'%d' is a PRIME NUMBER.", n);
        return;
    }
    else
    {
        if(n % i == 0)
        {
            printf("\n'%d' is  NOT a PRIME NUMBER", n);
            return;
        }
        else
            prime(n, i - 1);
    }

}
