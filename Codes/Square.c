#include <stdio.h>

int main()
{
      	int n;
	printf( "Enter Number:");
	scanf("%d", &n);
	printf("\n");

        int a[n][n];
        int i, j, x,y;
	x = 0;
        for(i = 0; i < n; i++){
		x+=1;
		y =1;
                for(j = 0; j <n; j++){
                        a[i][j] = x*y;
			y +=1;
		}
	}

        for(i = 0; i < n; i++){
		printf("");
                for(j = 0; j <n; j++){
                        printf("|%d|",a[i][j]);
		}
		printf("\n");
	}
        return 0;

}

