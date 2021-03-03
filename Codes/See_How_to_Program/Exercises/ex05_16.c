#include <stdio.h>

void evenOrNot( int x);

int main( void )
{

    int num;
    while (num != -1)
    {
        printf("Please input integer: ");
        scanf("%d", &num);
        evenOrNot(num);
    }
    

    return 0;
}

void evenOrNot( int x)
{
    if (x % 2 == 0)
    {
        printf("The number given is even.\n");
    } else
    {
        printf("The number given is not even.\n");
    }
    
    
}