/*
Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.

#include <stdio.h>
#include <stdlib.h>
*/

int main()
{
    int yasmin,  xavir;

    int num[5];

    for (xavir = 0; xavir<5; xavir++){
    scanf("%d", &num[xavir]);

    fflush(stdin);
    }

    for (yasmin = 4; yasmin >= 0; yasmin--){
        printf("%d\n", num[yasmin]);
    }

    return 0;


}