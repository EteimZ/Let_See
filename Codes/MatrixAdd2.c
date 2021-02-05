#include <stdio.h>

int main(){
	
	int a[3][3] = {{3, 1, -4}, {4, 3, 1}, {1, 4, -3}};
	int b[3][3] = {{2, 7, -5}, {-2, 1, 0}, {6, 3, 4}};
	int c[3][3];
	int i, j;

	for(i = 0; i < 3; i++)
                for(j = 0; j <3; j++)
                        c[i][j] = a[i][j] + b[i][j];

	for(i = 0; i < 3; i++)
        	for(j = 0; j <3; j++)
                	printf("a[%d][%d] = %d\n", i,j,c[i][j]);

return 0;
}
