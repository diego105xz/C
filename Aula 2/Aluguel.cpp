#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*Desclarar as variaveis: 
	float para n�meros com casas decimais.
	int para n�mero inteiros*/
	float aluguel, rateio;
	int pessoas;
	
	//Biblioteca Portugu�s
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe o valor do aluguel: R$ ");
	scanf("%f", &aluguel);
	
	printf("informe a quantidade de pessoas que moram na casa: ");
	scanf("%d", &pessoas);
	
	//Divis�o de aluguel pela quantidade de pessoas que moram juntas
	rateio = aluguel/pessoas;
	
	//Resultado
	printf("O valor do aluguel por pessoa �: R$ %.2f.\n\n", rateio);
	
	
	return 0;
}
