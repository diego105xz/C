#include <stdio.h>
#include <stdlib.h>
int main()
{
	float juros, saldo, novoSaldo, totaljuros;
	
	totaljuros = 0;
	novoSaldo = 0;
	
	printf("Digite seu saldo: ");
	    scanf("%f",&saldo);
	printf("Digite a taxa de juros sem porcentagem: ");
	    scanf("%f",&juros);
	    
	totaljuros = (juros * saldo)/100;
	novoSaldo = saldo - totaljuros ;
	
	printf("Total de juros: %.2f\n",totaljuros);
	printf("Seu saldo Atual:  %.2f\n",novoSaldo);
	
	return 0 ;

}

