#include <stdio.h>
#include <stdlib.h>
#define TAM 3
 
int main() {
    // declara��o dos dois vetores
    int A[TAM], B[TAM];
    int i;
    // leitura do vetor A
    printf ("*** Informe os dados do vetor A ***\n");
    for (i = 0; i < TAM; i++) {
        printf ("A[%d]: ", i);
        scanf ("%d", &A[i]);
    }
    // c�lculo do vetor B
    for (i = 0; i < TAM; i++) {
        B[i] = A[i] * 2;
    }
    // apresenta��o dos elementos do vetor B
    printf ("\n*** Dados do vetor B *** \n");
    for (i = 0; i < TAM; i++) {
        printf ("B[%d] = %d\n", i, B[i]);
    }
    system ("PAUSE");
}
