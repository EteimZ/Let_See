#include <stdio.h>

int main()
{
	/*
	int a[5][2] = {{0,0}, {1,2}, {2,4}, {3,4}, {4,8}};
	int i, j;
	*/

	int a[3][4];
	int i, j;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j <4; j++)
			a[i][j] = j + i;

	
	for(i = 0; i < 3; i++)
                for(j = 0; j <4; j++)
                        printf("a[%d][%d] = %d\n", i,j,a[i][j]);

	return 0;

}
