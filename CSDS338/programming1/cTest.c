#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_LINE 80
#define MAX_OPTS 20

int factorial(int n){
   if(n==1)
      return n;
   return factorial(n-1)*n;
}

int main(){
   printf("\n");
   for(int i=1; i<=10; i++){
      int square=i*i;
      int fact=factorial(i);
      printf("%d %d %d",i,square,fact);
      printf("\n");
   }
}
