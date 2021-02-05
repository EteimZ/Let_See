void matrixAdd(int arr[], int arr2[], int m, int n){
	int i,j;
	int c[m][n];

	for(i = 0; i < m; i++)
                for(j = 0; j <n; j++)
                        c[i][j] = arr[i][j] + arr2[i][j];
	
	for(i = 0; i < m; i++)
                for(j = 0; j <n; j++)
                        printf("a[%d][%d] = %d\n", i,j,c[i][j]);

}
