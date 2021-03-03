// Exercise 5.9 from See How to Program
#include <stdio.h>

float calculateCharges( float hour );

int main( void )
{
    printf("Car\tHours\tCharge\n");
    printf("1\t 1.5 \t%.2f\n", calculateCharges(1.5));
    printf("2\t 4.0 \t%.2f\n", calculateCharges(4.0));
    printf("3\t 24.0 \t%.2f\n", calculateCharges(24.0));
    printf("TOTAL\t %.1f \t%.2f\n",(1.5 + 4.0 + 24.0), (calculateCharges(1.5) + calculateCharges(4.0) + calculateCharges(24.0) ) );

    return 0;
}

float calculateCharges( float hour ){
    float charges = 2.0;

    if ( hour <= 3)
    {
        return charges;
    }else if ( hour > 3 && hour < 19 )
    {
        float num;
        num = (hour - 3)/2;

        charges += num;
    }else if ( hour >= 19)
    {
        charges = 10;
    }
    
    return charges;
}