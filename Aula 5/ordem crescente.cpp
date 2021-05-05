#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b;
	printf("Entre com 2 numeros:  ");
	scanf("%f%f", &a, &b);
	
	printf("\n\n Este programa sempre mostra seus 2 numeros em ordem crescente\n\n");
	
	if(a<b)
		printf("\n %.2f %.2f", a, b);
	else printf("\n %.2f %.2f", b, a);
	system("pause>>log");
	return 0;
}
