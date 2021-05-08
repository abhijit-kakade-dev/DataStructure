
#include<stdio.h>
#include<stdlib.h>
#define max 50

void printarr(int arr[], int i, int n);

int main()
{
    int arr[max], i, size, n;
    
    printf("How many elements are stored in array\n");
    scanf("%d", &size);
    
    for(i = 0; i < size; i++)
    {
        printf("Enter %d element", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter how many array element to be display");
    scanf("%d", &n);
    
    printarr(arr, 0, n);
    
    return 0;
    
}

void printarr(int arr[], int i, int n)
{
    if(i < n)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        printarr(arr, i+1, n);
        
    }
    
}
