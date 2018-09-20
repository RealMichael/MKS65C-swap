#include <stdio.h>
#include <time.h>
#include <time.h>

int main(){
  //First array set
    int res[10];
    int * resPoint = res;
    
    //Second Array set
    int res2[10];
    int * res2Point = res2;


  //random number gennny
  srand(time(NULL));
  
    * resPoint = rand();
    printf("First array Printing: %d\n",* resPoint);
 

  int i = 1;
  int position = 2;
  while(i < 9){
    *(resPoint + i) = rand();
    printf("First array Printing: %d\n", *(resPoint + i));
    i ++;
    position ++;
  }

  *(resPoint + position) = 0;
  printf("Last digit of first array: %d\n", *(resPoint + position));
	   
    
  int x = 0;
  while(x < 10){
    *(res2Point + x) = *(resPoint + 9 - x);
    printf("Reverse Printing: %d\n", *(res2Point + x));
    x ++;
  }
  return 0;
}
	   
    
