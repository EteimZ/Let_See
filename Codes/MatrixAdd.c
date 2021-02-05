#include <stdio.h>

int main(){
	
	int a[2][2] = {{2,-1}, {-7,4}};
	int b[2][2] = {{-3,0}, {7,-4}};
	int c[2][2];
	int i, j;

	for(i = 0; i < 2; i++)
                for(j = 0; j <2; j++)
                        c[i][j] = a[i][j] + b[i][j];

	for(i = 0; i < 2; i++)
        	for(j = 0; j <2; j++)
                	printf("a[%d][%d] = %d\n", i,j,c[i][j]);

return 0;
}
