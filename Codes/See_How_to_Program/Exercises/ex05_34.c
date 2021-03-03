#include <stdio.h>

int power(int base, int expo);

int main( void )
{
    printf("Recursive Power: %d\n", power(5,3));
    return 0;
}

int power(int base , int expo)
{
    if (expo == 1)
    {
        return base;
    }else
    {
        return ( base * power(base, expo -1));
    }

}