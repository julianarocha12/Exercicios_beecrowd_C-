#include<stdio.h>
#include <stdlib.h>


int main(){
 
 int X, Y, i, soma;
 
 scanf("%d %d",&X, &Y);
 soma = 0;
 
 if (X<Y){
  for(i=X;i<=Y;i++){
   if(i%13!=0){
    soma +=i;
   }
  }
 }else{
  for (i=Y;i<=X;i++){
   if(i%13!=0){
    soma+=i;
   }
  }
 }
 printf("%d\n",soma);

 return 0;
}