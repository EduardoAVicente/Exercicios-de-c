/*
Elaborar um programa para exibir a distância entre dois pontos em R2. 
Use uma função dist2


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0

Digite as coordenadas do 2o. ponto:

1 1

Saída:

Distancia entre os dois pontos: 1.414214
*/
#include <stdio.h>
#include <math.h> 


float dist2(float dx1,float dx2,float dy1,float dy2);
int main(void) {
  float x1,x2,y1,y2,r;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%f",&x1);
  scanf("%f",&y1);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%f",&x2);
  scanf("%f",&y2);

  r= dist2(x1, x2, y1,y2);


  printf("Distancia entre os dois pontos: %f",r);
  return 0;
}
  float dist2(float dx1,float dx2,float dy1,float dy2){
    float q,w,e,r1;
    q=dx1-dx2;
    w=dy1-dy2;
    e= q*q+w*w;
    r1= sqrt(e);
    return r1;

  }
