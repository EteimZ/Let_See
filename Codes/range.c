#include <limits.h>
#include <stdio.h>
#include <float.h>



int main(){
	printf("Max value of char = %d\n", CHAR_MAX);
	printf("Max value of char = %d\n", CHAR_MIN);
	printf("Max value of short = %d\n",SHRT_MAX);
	printf("Min value of short = %d\n",SHRT_MIN);
	printf("Max value of int = %d\n",INT_MAX);
	printf("Min value of int = %d\n",INT_MIN);
	printf("Max value of float = %.10e\n", FLT_MAX);
	printf("Max value of float = %.10e\n", FLT_MIN);
	printf("Max value of double =  %.10e\n", DBL_MAX);
	printf("Max value of double = %.10e\n",  DBL_MIN);
	return 0;
}
