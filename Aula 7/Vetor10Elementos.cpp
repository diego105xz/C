#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int vetor[10];
    for (int i=0; i < 10; i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%d", &vetor[i]);
        if (i==9)
        {
            printf(" Valores Digitados \n");
            for(int y=0; y < 10; y++)
            {
                printf("Inteiro: %d  ->  Valor: %d \n" , y, vetor[y]);
            }
        }
    }
    return(0);
} 
