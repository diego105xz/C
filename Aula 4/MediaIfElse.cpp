#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1=0, nota2, media;
	int inserirnovanota=1;
	printf("Digite nota igual a -1 para sair do programa.\n\n");
	while (nota1!=-1)
	{
		printf("Digite nota1: ");
		scanf("%f",&nota1);
		
		if (nota1!=-1)
		{
			printf("Digite nota2: ");
			scanf("%f",&nota2);	
			
			media = (nota1+nota2)/2;
			/*
			se aluno tirar de 0 a menor 5 --> reprovado
			se tirar de 5 a menor que 6 --> recuperacao
			se tirar nota maior ou igual a 6 --> aprovado
			*/
			printf("A média do aluno é: %.2f. Bons estudos!!!\n\n",media);
			
			if (media < 5)
			{
				printf("Aluno reprovado\n\n");
			}
			else
			{ 
			//	if (media>=5 && media<6)
				if (media<6)
				{
					printf("Aluno em recuperacao\n\n");
				}
				else
				{
					printf("Aluno aprovado\n\n");
				}
			}
	}
	}
	
	printf("\n\nFinal de programa!!!\n\n");
	
	return 0;
}
