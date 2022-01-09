/*
Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus()


Exemplo

Entrada:           

Digite o angulo em radianos:

3.141593

Saída:

O angulo de 3.141593 radianos equivale a 180.000000 graus.
*/

#include <stdio.h>
//radianos=2∗PI∗(graus/360)
int main(void) {
  double r,g;
  double pi=3.14159265358979323846;
  printf("Digite o angulo em radianos:\n");
  scanf("%lf",&g);
  r=(180*g)/pi;
  printf("O angulo de %lf radianos equivale a %lf graus.",g,r);



  return 0;
}