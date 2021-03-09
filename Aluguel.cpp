#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*Desclarar as variaveis: 
	float para números com casas decimais.
	int para número inteiros*/
	float aluguel, rateio;
	int pessoas;
	
	//Biblioteca Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe o valor do aluguel: R$ ");
	scanf("%f", &aluguel);
	
	printf("informe a quantidade de pessoas que moram na casa: ");
	scanf("%d", &pessoas);
	
	//Divisão de aluguel pela quantidade de pessoas que moram juntas
	rateio = aluguel/pessoas;
	
	//Resultado
	printf("O valor do aluguel por pessoa é: R$ %.2f.\n\n", rateio);
	
	
	return 0;
}
