#include<stdio.h>
int main(){
		int n, maior, menor, i;
		
		printf("Informe 10 numeros: \n\n");
	
		maior=n;
		menor=n;
		
		for(i=1; i<11; i++){
			printf("\nInforme um numero: ",i+1);
			scanf("%i", &n);
			
			if(n > maior)
			 maior = n;
			else
			if(n < maior)
			 menor = n;
		}
 printf("\n\n Maior numero: %i \n Menor numero: %i ", maior, menor);
}
