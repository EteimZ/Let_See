/* Fig 5.14: fig05_14.c
   Recursive factorial function */

#include <stdio.h>

long factorial( long number );

int main( void )
{
    int i;

    for ( i = 0; i <= 10; i++)
    {
        printf("%2d! = %ld\n", i , factorial(i));
    }

    return 0;
    
}

long factorial( long number )
{
    // base case
    if (number <= 1)
    {
        return 1;
    }else // recursive step
    {
        return (number * factorial( number - 1 ));
    }
       
}