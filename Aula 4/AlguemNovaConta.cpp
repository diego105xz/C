#include <stdio.h>
#include <stdlib.h>

int main()
{
	int qtdepessoa;
	float conta;
	float rateio;
	float multa;
	float total;
	int perg;
	int novaconta;
	printf("Digite quantidade de pessoas: ");
	scanf("%d",&qtdepessoa);
	novaconta = 1;
	total = 0;
	while (novaconta==1)
	{	
		multa=0;
		printf("Digite valor da conta R$ ");
		scanf("%f",&conta);	
		printf("Tem multa. Digite 1 para sim ou qq outro valor para nao: ");
		scanf("%d",&perg);
		if (perg==1)
		{
			printf("Digite valor da multa R$ ");
			scanf("%f",&multa);			
		}	
		
		rateio = (conta+multa) / qtdepessoa;
		total = total + rateio;
		printf("Cada um terá que pagar R$ %.2f.\n\n",rateio);	
		printf("Digite 1 para incluir nova conta: ");
		scanf("%d",&novaconta);
	}
	printf("\nTotal geral R$ %.2f\n\n",total);
	return 0;
}
