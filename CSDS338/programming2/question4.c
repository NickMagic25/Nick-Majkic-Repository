#include <stdio.h>
#include <stdlib.h>

void main(){
	// if malloc returns NULL when it is initialized, lazy allocation is occuring
	int *x=malloc(5*sizeof(int));
	if(x==NULL){
		printf("Malloc has lazy memory allocation");
	}
	else{
		printf("Malloc does not have lazy memory allovation");
	}
}
