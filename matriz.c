//Escreva um algoritmo em C que realize o preenchimento de uma matriz de tamanho n x m e em seguida imprima. A matriz deve ser preenchida de forma sequencial. Os inputs serão a quantidade de linha e a quantidade de colunas.

#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int isa, jp, matheus = 1;
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);

    c = a -1;
    d = b - 1;
    for (isa = 0 ; isa <= c ; isa++){
        for(jp = 0 ; jp <= d ; jp++){
            printf("%d ", matheus);
            matheus++;
        }
        printf("\n");
    }
    return(0);
}
