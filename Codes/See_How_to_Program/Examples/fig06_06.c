#include <stdio.h>
#define SIZE 12

int main( void )
{
    int a[ SIZE ] = {32,27,64,18,95,14,90,87,70,43};;
    int total = 0;

    for ( int i = 0; i < SIZE; i++)
    {
        total += a[ i ]; 
    }
    
    printf("Total of array element values is %d\n", total);

    return 0;
    
}