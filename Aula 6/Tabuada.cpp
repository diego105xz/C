#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int tabuada = 0;
    printf("\nDigite o numero da tabuda: \n\n");
    scanf("%i",&tabuada);

    for(int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
