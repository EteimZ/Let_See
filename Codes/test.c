#include <stdio.h>
#include "algor.h"
#include "Matrix.h"

int main(){
	/*
	int arr[] = { 12, 11, 13, 5, 6, 1 }; 
    	int n = sizeof(arr) / sizeof(arr[0]);
 	printArray(arr,n); 
    	insertionSort(arr, n); 
    	printArray(arr, n); 
  	*/
	int a[2][2] = {{2,-1}, {-7,4}};
	int b[2][2] = {{-3,0}, {7,-4}};
	
	matrixAdd(a, b, 2, 2);
	
    	return 0; 
}
