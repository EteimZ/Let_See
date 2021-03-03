#include <stdio.h>

int fibonacci( int n );

int main( void )
{
    printf("%d\n", fibonacci(6));
    

    return 0;
}

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int sum;

    for (int i = 1; i < (n - 2); i++)
    {

        a +=  b;
        b +=  a;
        if (n%2 == 0)
        {
            sum = a;
        }else
        {
            sum = b;
        }
    }

    return sum;
    
}