#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,h=0,t=0,A[5];
  unsigned int seed;
  printf("Tossing a coins\n");
    seed = (unsigned int)time(NULL);
    srand(seed);
   for(i = 1;i < 4;i++){
     A[i] = rand()%2;
    if(A[i] == 0){
      printf("Heads\n");
      h++;
    }
    else{
      printf("Tails\n");
      t++;
    }
  }
    printf("Heads %d Tails %d\n",h,t);
  if(h >t )printf("You won\n");
  else printf("You lost\n");
  return 0;
}
