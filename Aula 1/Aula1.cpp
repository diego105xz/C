#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
	int idade;
	float altura;
	double peso;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Ol�, seja bem vindo!\n");
	printf("Voc� est� na turma de Estrutura de Dados! \n");
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite seu peso: ");
	scanf("%lf",&peso);
	
	printf("\n Idade: %d , altura: %f, peso: %lf", idade , altura, peso);
	
	return 0;
}

