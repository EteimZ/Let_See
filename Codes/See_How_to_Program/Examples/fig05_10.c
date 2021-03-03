/* Fig. 5.10: fig05_10.c
   Craps */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST};

int rollDice( void ); // Function prototype

int main()
{
    int sum; /* sum of the rolled dice */
    int myPoint; /* point earned */

    enum Status gameStatus; /* can contain CONTINUE, WON OR LOST */

    srand( time( NULL ) );

    sum = rollDice(); /* First roll of the dice */

    /* determine game status based on the sum of dice */
    switch ( sum )
    {

    /* win on first roll */
    case 7:
    case 11:
        gameStatus = WON;
        break;
    
    /* lose on first roll */
    case 2:
    case 3:
    case 12:
        gameStatus = WON;
        break;

    /* remember point */
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint );
        break; //optional
    }

    /* while game not complete */
    while ( gameStatus == CONTINUE)
    {
        sum = rollDice();

        if ( sum == myPoint)
        {
            gameStatus = WON;
        }
        else
        {
            if ( sum == 7 )
            {
                gameStatus = LOST;
            }

        }
        
    }

    /* display won or lost message */
    if ( gameStatus == WON)
    {
        printf("Player wins\n");
    }
    else
    {
        printf("Player losses\n");
    }

    return 0;

} /* end main */

int rollDice( void )
{
    int die1; // first die
    int die2; // second die
    int workSum; // sum of dice

    die1 = 1 + ( rand() % 6 );
    die2 = 1 + ( rand() % 6 );
    workSum = die1 + die2;

    // display result of this roll
    printf( "Please rulled %d + %d = %d\n", die1, die2, workSum);

    return workSum; // return sum of dice

} // end function rollDice