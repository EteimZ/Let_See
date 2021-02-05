void insertionSort(int arr[], int n){
	int key, i, j;

        for(j=1; j< n; j++){
                key = arr[j];
                i = j - 1;

                while(i >= 0 && arr[i] > key){
                        arr[i + 1] = arr[i];
                        i = i - 1;
                arr[i + 1] = key;
                }
        }

}

void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
