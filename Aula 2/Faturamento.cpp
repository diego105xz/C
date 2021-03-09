#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*Desclarar as variaveis: 
	float para números com casas decimais.
	int para número inteiros*/
	float Preco, FatInteira, FatMeia, FatTotal ;
	int PassageirosInt, PassageirosMeia;
	
	//Biblioteca Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe o valor da passagem aérea: R$ ");
	scanf("%f", &Preco);
	
	printf("Quantidade de passageiros que pagam passagem inteira: ");
	scanf("%d", &PassageirosInt);
	
	printf("Quantidade de passageiros quem pagam meia passagem: ");
	scanf("%d", &PassageirosMeia);
	
	//Calculo faturamento da passagem inteira
	FatInteira = Preco * PassageirosInt;
	
	//Calculo faturamento passagens meia
	FatMeia = (Preco/2)*PassageirosMeia ;
	
	//valor total de faturamento.
	FatTotal = FatInteira + FatMeia;
	
	//Resultado
	printf("\nO valor de faturamento de passagem inteira é : R$ %.2f.\n", FatInteira);
	printf("O valor de faturamento de passagem meia é : R$ %.2f.\n", FatMeia);
	printf("O valor de faturamento Total é : R$ %.2f.\n\n", FatTotal);
	
	return 0;
}
