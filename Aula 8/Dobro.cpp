#include <stdio.h>
#include <stdlib.h>
int dobro(int x)
{
    x = 2*x;
    return x ;
}
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("O Numero digitado foi : %d\n",n);
    n = dobro(n);
    printf("O dobro : %d\n",n);
    return 0 ;
}

