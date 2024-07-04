#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int N, i;
 
 scanf("%d", &N);
 
 for(i=1;i<=N*4;i+=4){
  printf("%d ",i);
  printf("%d ",i+1);
  printf("%d ",i+2);
  printf("PUM\n");
 }
}