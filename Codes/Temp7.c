#include <stdio.h>

enum Temp {LOWER = 0, UPPER = 300, STEP = 20};

float Convert(int);

int main(){
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
               printf("%3d %6.1f\n", fahr, Convert(fahr));
}

float Convert(int n){
        float Celsius;

        Celsius = (5.0/9.0)*(n-32);
        return Celsius;
}  
