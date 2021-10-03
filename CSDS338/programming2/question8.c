#include <stdio.h>
#include <stdlib.h>


//copies a over to b
void swap(char *a, char*b){
	// get size of a and b
	int aSize=sizeof(a);
	int bSize=sizeof(b);
	// for each element in a copy it over to b
	for(int i=0; i<=aSize; i++){
		b[i]=a[i];
	}
}

void main(){
	char *a;
	char *b;
	a= malloc(1*sizeof(char));
	b= malloc(1*sizeof(char));
	// assign hello to a and goodbye to b
	a[0]='h';
	a[1]='e';
	a[2]='l';
	a[3]='l';
	a[4]='o';

	b[0]='g';
	b[1]='o';
	b[2]='o';
	b[3]='d';
	b[4]='b';
	b[5]='y';
	b[6]='e';
	// print original
	printf("%s, %s\n", a,b);
	// swap the two
	swap(a,b);
	// print swaped strings
	printf("%s, %s\n", a,b);
}
