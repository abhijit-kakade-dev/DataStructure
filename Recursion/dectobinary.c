
// convert the decimal number into binary number


#include<stdio.h>
#include<stdlib.h>

void binary(int);

int main()
{
    int n;
    
    printf("Enter a decimal number to convert it into binary number\n");
    scanf("%d", &n);
    
    binary(n);
    
    return 0;
    
}

void binary(int n)
{
    int r;
    
    if(n == 0)
        return;
    else
    {
        //r = n % 2;
        
        binary(n / 2);
        
        printf("%d", n % 2);
        
    }
    
}
