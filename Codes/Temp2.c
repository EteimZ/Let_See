# include <stdio.h>

int main(){

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	printf("%s\t%s\n",  "Celsius", "Fahrenheit");
	while (fahr <= upper){
		fahr = (9.0/5.0 * celsius) + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
