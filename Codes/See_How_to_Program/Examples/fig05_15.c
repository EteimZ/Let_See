/* Fig 5.15: fig05_15.c
   Recursive fibonacci function */

#include <stdio.h>

long fibonacci( long n );

int main( void )
{
    long result; // fibonacci value
    long number; // number input by user

    printf("Enter an integer: ");
    scanf("%ld", &number);

    result = fibonacci( number );

    printf( "FIbonacci( %ld ) = %ld\n", number, result);

    return 0;
}

long fibonacci( long n )
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {   // recursive step
        return fibonacci( n - 1 ) + fibonacci( n - 2);
    }
    
    
}