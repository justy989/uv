#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     srand(time(0));

     int pick = (rand() % 135) + 1;

     if(pick <= 37){
          printf("d1 %d%d\n", (pick / 10) + 1, (pick % 10) + 1);
          return 0;
     }else if(pick < 70){
          printf("d2");
          pick -= 37;
     }else if(pick < 103){
          printf("tnt");
          pick -= 70;
     }else{
          printf("pt");
          pick -= 103;
     }

     printf(" %02d\n", pick + 1);
     return 0;
}
