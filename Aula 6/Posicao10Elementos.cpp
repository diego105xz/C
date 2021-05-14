#include <stdio.h>

int main (void) 
{
  int i;
  int vet[10];

  for (i = 0 ; i <10 ; i++)
{
 printf("Informe os numeros: ");
  scanf("%i",  &vet[i]);
}


  for (i = 0 ; i <10 ; i++)
{
 printf("\n Posicao do vetor[%i] = %i", i,vet[i]);
}
  
  return (0);
} 
