#include <stdio.h>

int soma (int x, int y){
		int resp =0;
		int contador = 0;
		
		if(x < y){
		for (contador = x +1; contador < y; contador ++)
		 if(contador % 2 != 0)
		 	resp += contador;
		}
		else {
		for (contador = y +1; contador < x; contador ++)
		 if(contador % 2 != 0)
		 	resp += contador;	
		}
		return resp;
}
int main (){
	
	int x = 0, y = 0;
	
	scanf("%d%d",&x, &y);
	printf("%d\n", soma (x,y));
}