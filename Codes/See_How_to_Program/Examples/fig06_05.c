#include <stdio.h>
#define SIZE 10

int main( void )
{
    int s[SIZE];
    int j;

    for ( j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }
    
    printf("%s%13s\n", "Elements", "Values");

    for ( j = 0; j < SIZE; j++)
    {
        printf("%7d%13d\n", j, s[j]);
    }

    return 0;
    
}