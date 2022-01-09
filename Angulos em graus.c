/*
Leia dois vetores x e y com componentes do tipo double e de tamanho  n=2 ou n=3. 

Utilize funções para determinar o ângulo θ, em graus, entre os vetores  x e  y , sabendo que:.

cosθ=x⋅y|x||y|

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal.

Entrada:                             Saída:

2                                         Angulo entre os vetores: 90.0000 graus.

2 3

 -3 2              

3                                        Angulo entre os vetores: 60.0000 graus.

2 1 -1

1 -1 -2
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
  double pi = 3.14159265358979323846;
  int limite;
  scanf("%i",&limite);
  double x[limite];
  double y[limite];
  if(limite==2){
    for (int i = 0; i<limite; ++i){
      scanf("%lf", &x[i]);
    }
    for (int i = 0; i<limite; ++i){
      scanf("%lf", &y[i]);
    }
    double a = (x[0]*y[0]) + (x[1]*y[1]);
    double b = sqrt((pow(x[0],2) + pow(x[1],2)));
    double c = sqrt((pow(y[0],2) + pow(y[1],2)));
    double t = b * c;
    double f = a/t;
  printf("Angulo entre os vetores: %.4lf graus.", acos(f)*(180/pi));
  }
  else{
    for (int i = 0; i<limite; ++i){
      scanf("%lf", &x[i]);
    }
    for (int i = 0; i<limite; ++i){
      scanf("%lf", &y[i]);
    }
    double v = (x[0]*y[0]) + (x[1]*y[1]) + (x[2] * y[2]);
    double b = sqrt((pow(x[0],2) + pow(x[1],2) + pow(x[2],2)));
    double c = sqrt((pow(y[0],2) + pow(y[1],2) + pow(y[2],2)));
    double t1 = b * c;
    double f1 = v/t1;
  printf("Angulo entre os vetores: %.4lf graus.", acos(f1)*(180/pi));
  }
 return 0;
}