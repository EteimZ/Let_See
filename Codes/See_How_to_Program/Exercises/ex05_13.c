#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randset( int num1, int num2, int num3, int num4, int num5);

int main( void )
{
    srand( time(NULL) );

    //int x = 2 * (1 + (rand() % 5)); elegant solution but not general        
        
    printf("Random Number from 2,4,6,8,10: %d\n", randset(2,4,6,8,10));
    printf("Random Number from 3,5,7,9,11: %d\n", randset(3,5,7,9,11));
    printf("Random Number from 6,10,14,18,22: %d\n", randset(6,10,14,18,22));

    return 0;
}

int randset( int num1, int num2, int num3, int num4, int num5)
{

    int randnum = (1 + (rand() % 5));
    int num; 

    switch (randnum)
    {
    case 1:
        num = num1;
        break;

    case 2:
        num = num2;
        break;

    case 3:
        num = num3;
        break;

    case 4:
        num = num4;
        break;

    case 5:
        num = num5;
        break;
    }

    return num;
}