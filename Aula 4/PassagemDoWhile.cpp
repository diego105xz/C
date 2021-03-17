#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int qtdepass,qtdepass1classe,tem1classe;
	float valorpassagem,faturamento,valorpassagem1classe,faturamento1classe;
	int novovoo;
	float total;
	total = 0;
	do
	{
	    faturamento1classe=0;
		printf("Digite valor da passagem na classe economica R$ ");
		scanf("%f",&valorpassagem);
		
		printf("Quantidade de passageiros na classe economica: ");
		scanf("%d",&qtdepass);
		
		printf("Tem passagem na 1a classe ? Digite 1 para sim: ");
		scanf("%d",&tem1classe);
		
		if (tem1classe == 1)
		{
			printf("Digite valor da passagem da 1a classe R$ ");
			scanf("%f",&valorpassagem1classe);
			
			printf("Quantidade de passageiros na 1a classe: ");
			scanf("%d",&qtdepass1classe);
			faturamento1classe = 	valorpassagem1classe * 	qtdepass1classe;
		}
		
		faturamento = valorpassagem * qtdepass + faturamento1classe;
		total = total + faturamento;
		printf("Total de Faturamento R$ %.2f.\n",faturamento);
		printf("Digite 1 para incluir novo voo: ");
		scanf("%d",&novovoo);	
	} while (novovoo==1);
	
	printf("Faturamento total da Cia Aerea. R$ %.2f",total);
	return 0;
