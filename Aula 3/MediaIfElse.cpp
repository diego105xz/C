#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	//Desclarar as variaveis
	float n1, n2, media;
	
	//biblioteca em Portugu�s
	setlocale(LC_ALL,"Portuguese");
		
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("informe a segunda nota: ");
	scanf("%f", &n2);
	
	//M�dia
	media = (n1 + n2)/2;
	
	/*
	Se o aluno tirar de 0 a menor 5 --> Reprovado
	Se tirar de 5 a menor que 6 --> recuperacao
	Se tirar nota maior ou igual a 6 --> aprovado
	*/
	
	//resultado
	printf("A m�dia final � : %.2f. Bons estudos! ", media);
	
	if (media < 5 )
	{
		printf("Aluno Reprovado");
	}
	else
	{
		if ( media < 6)
		{
			printf("Aluno em Recupera��o");
		}
		else
		{
			printf("Aluno Aprovado");
		}
			
	}
		
	return 0;
}
