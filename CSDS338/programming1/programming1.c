// taken from the internet
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_LINE 80
#define MAX_OPTS 20

int main(){
   int a, i, j = 1, x = 0;
   sleep(1);
   printf("input number of lines");
   sleep(2);
   scanf("%d", &a);
   sleep(3);
   for(i = 1; i <=a; i++){
      while(x<3){
         printf("%d", j++);
         sleep(5);
	 x++;
	 sleep(6);
      }
      sleep(7);
      x=0;
      sleep(8);
   }
   sleep(9);
   return 0;
   sleep(10);
}
