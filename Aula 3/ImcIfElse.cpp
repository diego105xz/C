#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	//Desclarar as variaveis
	float peso, altura, imc;
	
	//biblioteca em Português
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe seu peso: ");
	scanf("%f", &peso);	
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	
	//Calcuco IMC
	imc = peso / ( altura * altura);
	
	
	printf("Seu indice de massa corporal é : %.2f.! ", imc);
	
	if (imc < 18.5 )
	{
		printf("Abaixo do peso");
	}
	if (imc > 18.5 &&  imc <= 25 )
	{
		printf("Peso Normal");
	}
	if (imc > 25 && imc <= 30)
	{
		printf("Sobrepeso");
	}
	if (imc >30 && imc <= 35)
	{
		printf("Obesidade Grau 1");
	}
	if (imc >35 && imc <= 40)
	{
		printf("Obesidade Grau 2");
	}
	if (imc > 40)
	{
		printf("Obesidade Grau 3");
	}
		
	return 0;
}
