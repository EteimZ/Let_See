#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randn(int lower, int upper);

int main( void )
{      
    srand( time(NULL) );

    printf("Random Number between 1 and 2: %d\n", randn(1,2));
    printf("Random Number between 1 and 100: %d\n", randn(1,100));
    printf("Random Number between 0 and 9: %d\n", randn(0,10));
    printf("Random Number between 1000 and 1112: %d\n", randn(1000,113));
    printf("Random Number between -1 and 1: %d\n", randn(-1,3));
    printf("Random Number between -3 and 11: %d\n", randn(-3,15));

    return 0;
}

int randn( int lower, int upper)
{
    int n;
    n = lower + ( rand() % upper );

    return n;
}
