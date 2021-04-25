
#include<stdio.h>
#include<stdlib.h>

double e( int x, int n);

int main()
.
    int x, n;
    double result;
    printf("Enter the power & no.of terms in taylor series.");
    scanf("%d%d", &x, &n);

    result = e(x,n);

    printf("\n The value of e(%d,%d) = %lf", x, n, result);

    return 0;

}
double e( int x, int n)
{
    double res;
    static float p = 1, f = 1;

    if( n == 0 )
        return 1;
    else
    {
        res = e(x, n-1);

        p = p * x;
        f = f * n;

        return res + p/f;

    }
    
}