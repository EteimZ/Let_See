#include <stdio.h>

int integerPower( int base, int exponent );

int main( void )
{

    printf("integerPower(3,4) = %d\n",integerPower(3,4));

    return 0;
}

int integerPower(int base, int exponent )
{
    int num = base;

    for (int i = 1; i < exponent; i++)
    {
        num *= base;
    }
    
    return num;
}