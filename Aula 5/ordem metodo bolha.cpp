#include <stdio.h>
#include <stdlib.h>
void Bolha (int A[], int n);
int main(int argc, char *argv[])
{	
	int v[]={26,58,49,38,11,93,87,34};
	int i=0;
	Bolha(v, 8);
	for( i = 0; i < 8; i++)
	{
		printf("%d\t",v[i]);
 	}
 	printf("\n");
 
	system("pause");
	return 0;
}

void Bolha (int A[], int n)
{ // inicio da tecnica bolha
	int i, j, temp; // declarção das variaveis
	 for (i = 0; i < n-1; i++) // inicio dos passos a serem realizados
	{
		for (j = 0; j < n-1 ;j++) // inicio da comparação entre os vetores
 		{
 			if (A[j] < A[j+1]) // Basta inverter a comparação
 			{ // processo de troca entre vetores
				temp = A[j];
 
	 			A[j] = A[j+1];
				A[j+1] = temp;
 			}
 		}
 	}
}
