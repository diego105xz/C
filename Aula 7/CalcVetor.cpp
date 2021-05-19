#include <stdio.h>
#include <stdlib.h>
#define TAM 4
 
int main () {
   // declaração dos vetores
   int A[TAM], B[TAM], C[TAM];
   int i;
   // leitura do vetor A
   printf ("*** Informe os valores do vetor A ***\n");
   for (i = 0; i < TAM; i++) {
      printf ("A[%d]: ", i);
      scanf ("%d", &A[i]);
   }
   // leitura do vetor B
   printf ("\n*** Informe os valores do vetor B ***\n");
   for (i = 0; i < TAM; i++) {
      printf ("B[%d]: ", i);
      scanf ("%d", &B[i]);
    }
   // calculo e impressao do vetor C
    printf ("\n*** Valores do vetor C ***\n");
    for (i = 0; i < TAM; i++) {
          C[i] = A[i] - B[i];
          printf ("C[%d] = %d\n", i, C[i]);
    }
    printf ("\n\n");
    system ("PAUSE");
}
