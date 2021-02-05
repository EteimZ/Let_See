#include <stdio.h>

int Sum(int n){
	int m = 0;
	for(int i = 0; i<=n; i++)
		m += i;
	return m; 
}

int main(){
	int num;
	printf("Enter number:");
	scanf("%d", &num);
	printf("%d\n", Sum(num));
}
