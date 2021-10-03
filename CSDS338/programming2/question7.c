#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	int *a;
	int **b;

	i=326;
	a=&i;
	b=&a;
	printf("%d %d %d", i, *a,**b);
}
