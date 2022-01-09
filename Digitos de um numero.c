/*
Escreva uma função e C que, dado um número inteiro n, retorne a quantidade de dígitos que esse número tem.

Atenção: não é para imprimir no terminal. Sua função deverá retornar o número de dígitos.

Ex.:

n=1023, 4 dígitos
n=231, 3 dígitos
*/
#include <math.h>
#include <stdio.h>
 
int digitos(int n) {
    return(floor(log10(n)) + 1);
    
    }
