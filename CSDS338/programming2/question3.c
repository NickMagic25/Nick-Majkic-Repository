#include <stdio.h>
#include <stdlib.h>

void main(){
	int* arr;
	int size=7;
	// on some systems, malloc will assign garbage values to the array
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0; i<size; i++){
		printf("%d\n", arr[i]);
	}
	free(arr);
	// on some system, calloc will assign 0 to all the values of the array
	arr=(int*)calloc(size, sizeof(int));
	for(int i=0; i<size; i++){
                printf("%d\n", arr[i]);
        }
	free(arr);
}
// on this system, both malloc and calloc assign 0 to all values of the array
// however, malloc is prefered as it always runs faster than calloc, since it 
// assigns garbage values.
