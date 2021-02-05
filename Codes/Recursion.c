#include <stdio.h>

int Count(int);

int main(){
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	printf("%d\n", Count(100));
}

int Count(int n){
	
	if (n == 0) return 0;
	else
		return n + Count(n-1);
}
