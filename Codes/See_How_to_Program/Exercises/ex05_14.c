// use "gcc ex05_14.c -o ex05_14 -lm" to run

#include <stdio.h>
#include <math.h>

double hypotenuse( double side1, double side2);

int main( void )
{

    printf("Triangele\tSide1\tSide2\t Hypotenuse\n");
    printf("1\t\t 3.0\t 4.0 \t%5.2f\n", hypotenuse(3, 4));
    printf("2\t\t 5.0\t 12.0 \t%5.2f\n", hypotenuse(5, 12));
    printf("3\t\t 8.0\t 15.0 \t%5.2f\n", hypotenuse(8, 15));

    return 0;
}

double hypotenuse( double side1, double side2)
{
    double hypo;
    
    hypo = pow(side1,2) + pow(side2,2);

    hypo = sqrt(hypo);

    return hypo;
}