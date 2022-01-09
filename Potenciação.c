/*
Implemente a função Pot que imprime o valor de xn, onde x∈R e n é um número inteiro.

Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
2  -3                                                           0.1250
5   3                                                           125
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Pot (double entrada, double expoente){
  scanf("%lf", &entrada);
  scanf("%lf", &expoente);
  printf("%.4lf", pow(entrada, expoente));
  return pow(entrada, expoente);
}

int main(){
  double e = 0, p = 0;
  Pot(e, p);
  return 0;
}