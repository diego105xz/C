#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, altura, imc;
	printf("Digite peso: ");
	scanf("%f",&peso);
	printf("Digite altura: ");
	scanf("%f",&altura);
	imc = peso / (altura*altura);
	printf("IMC: %.2f\n\n",imc);
	
	if (imc<18.5)
	{
		printf("Abaixo do peso");
	}
	else
	if (imc<25)
	{
		printf("Peso Normal");
	}
	else
	if (imc<30)
	{
		printf("Sobrepeso");
	}
	else
	if (imc<35)
	{
		printf("Obesidade grau 1");
	}
	else
	if (imc<40)
	{
		printf("Obesidade grau 2");
	}
	else
	{
		printf("Obesidade grau 3");
	}
	
	return 0;
}
