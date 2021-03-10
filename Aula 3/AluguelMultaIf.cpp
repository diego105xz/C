#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*Desclarar as variaveis: 
	float para números com casas decimais.
	int para número inteiros*/
	float aluguel, rateio, multa;
	int pessoas, pergunta;
	multa = 0;
	
	
	//Biblioteca Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe o valor do aluguel: R$ ");
	scanf("%f", &aluguel);
	
	printf("informe a quantidade de pessoas que moram na casa: ");
	scanf("%d", &pessoas);
	
	printf("Tem multa ?\n Digite 1 para sim! Outro valor para não: ");
	scanf("%d", &pergunta);
	
	if (pergunta == 1)
	{
		printf("Digite o Valor da multa R$: ");
		scanf("%f", &multa);
	}
	
	//Divisão de aluguel + multa pela quantidade de pessoas que moram juntas
	rateio = (aluguel + multa) / pessoas;
	
		
	//Resultado
	printf("O valor por pessoa é: R$ %.2f.\n\n", rateio);
	
	
	return 0;
}
