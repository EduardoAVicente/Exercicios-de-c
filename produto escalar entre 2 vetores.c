/*
Elaborar um programa para exibir o produto escalar de dois vetores em R3. 
Use uma função prodEsc.


Exemplo

Entrada:           

Digite as coordenadas do 1o vetor:

2.8 9.4 -8.4

Digite as coordenadas do 2o vetor:

2.8 -4.2 3.7

Saída:

Produto Escalar: -62.719997
*/
#include <stdio.h>

int main(void) {
  float a1,a2,a3,b1,b2,b3,r;
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f",&a1);
  scanf("%f",&a2);
  scanf("%f",&a3);
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f",&b1);
  scanf("%f",&b2);
  scanf("%f",&b3);

  r =(a1*b1)+(a2*b2)+(a3*b3);

  printf("Produto Escalar: %f",r);
  return 0;
}
