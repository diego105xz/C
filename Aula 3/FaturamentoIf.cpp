#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*Desclarar as variaveis: 
	float para números com casas decimais.
	int para número inteiros*/
	float PrecoEco, Preco1a, FatTotal, Fat1a, FatEco;
	int PassageirosEco, Passageiros1a, pergunta;
	
	//Biblioteca Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe o valor da passagem economica: R$ ");
	scanf("%f", &PrecoEco);
	
	printf("Quantidade de passageiros da classe economica: ");
	scanf("%d", &PassageirosEco);
	
	printf("Tem venda de Passagem Primeira classe ?\n\n Digite 1 para sim: ");
	scanf("%d",&pergunta);
	
	if (pergunta == 1)
	{
		printf("Informe o valor da passagem de Primeira classe: R$ ");
		scanf("%f",&Preco1a);
	
		printf("Quantidade de passageiros de Primeira classe: ");
		scanf("%d",&Passageiros1a);
		Fat1a = Preco1a * Passageiros1a;
	}
	
	//Calculo faturamento da passagem economica
	FatEco = PrecoEco * PassageirosEco;
	
	//valor total de faturamento.
	FatTotal = FatEco + Fat1a;
	
	//Resultado
	printf("\nO valor de faturamento de passagem Economica é : R$ %.2f.\n", FatEco);
	printf("O valor de faturamento de passagem Executiva é : R$ %.2f.\n", Fat1a);
	printf("O valor de faturamento Total é : R$ %.2f.\n\n", FatTotal);
	
	return 0;
	
}
