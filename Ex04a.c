#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,h=0,t=0,A[5];
  unsigned int seed;
  char a[100];
  printf("Who are you?\n");
  scanf("%s",a);
  printf("Hello,%s\n",a);
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
    if(h >t )printf("%s won!\n",a);
  else printf("%s lost\n",a);
  return 0;
}
