#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	//Desclarar as variaveis
	float n1, n2, media;
	
	//biblioteca em Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("informe a segunda nota: ");
	scanf("%f", &n2);
	
	//Média
	media = (n1 + n2)/2;
	
	//resultado
	printf("A média final é : %.2f. Bons estudos!", media);
	
	
	return 0;
}
