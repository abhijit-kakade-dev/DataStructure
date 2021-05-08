
// Find the HCF of two numbers by using recursion.



#include<stdio.h>
#include<stdlib.h>

int HCF(int, int);

int main()
{
    int num1, num2;
    
    printf("Enter two numbers to calculate their HCF ::\n");
    scanf("%d%d", &num1, &num2);
    
    printf("\n Let's find the HCF ::");
    
    printf("\n The HCF of %d & %d = %d\n", num1, num2, HCF(num1, num2));
    
    return 0;
    
}

int HCF(int num1, int num2)
{
    if(num1 % num2 == 0)
        return num2;
        
    else if(num2 % num1 == 0)
        return num1;
        
    else
    {
        if(num1 > num2)
            return HCF(num2, num1 % num2);
        else
            return HCF(num1, num2 % num1);
    }
    
}

