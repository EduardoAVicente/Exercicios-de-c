/*
Dado um número de 3 algarismos construir outro número

de quatro algarismos com a seguinte regra

a) os três primeiros algarismos, contados da esquerda para

direita são iguais aos do número dado

b) O quarto algarismo é um dígito de controle calculado da seguinte forma:

Primeiro algarismo + segundo algarismo x 3 + terceiro algarismo x 5;

 o dígito de controle é igual ao resto da divisão dessa soma por 7

*/
#include <stdio.h>

int main() {
  int e,d1, d2,d3,d4;
  scanf("%i",&e);
  d1 = e/100;
  d2 = e/10-(d1*10);
  d3 = (e -(d2*10))-(d1*100);
  d4 = (d1+(d2*3)+(d3*5))%7;
  printf("%d%d%d%d",d1,d2,d3,d4);
