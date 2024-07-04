#include <stdio.h>

int main() {
   double media, not1, not2;
   
	do{
		scanf("%lf", &not1);
		if (not1<0 || not1 >10){
			printf("nota invalida\n");
		}
	}while(not1<0 || not1>10);
	
	do{
		scanf("%lf", &not2);
		if (not2 <0 || not2 > 10){
			printf("nota invalida\n");
		}
	}while(not2<0 || not2>10);
	
	media = (not1 + not2)/2;
	printf("media = %.2lf\n", media);
	             
  return 0;
   }