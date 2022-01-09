/*
Elaborar um programa cuja entrada são n pontos no plano que são os vértices de um
polígono de no máximo 100 lados.
Determine o perímetro desse polígono.
Utilize estrutura, dupla precisão e 4 casas depois da vírgula.
Exemplo:

Entrada                         Saída

4                                    Perimetro: 4.0000

0 0 1 0 1 1 0 1



3                                    Perimetro: 3.4142 

0 0 1 0 0 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Poligono{

  double resp;
  double dist[100];
  double y[100];
  double x[100];
}poli;

int main(){
  struct Poligono poli;
  int limite = 0;
  if(limite > 100){
    printf("Tamanho inválido.");
  }else{
    scanf("%d", &limite);
    for(int i = 0; i < limite; i++){
      scanf("%lf", &poli.x[i]);
      scanf("%lf", &poli.y[i]);
    }
    
    for(int z = 0; z < limite; z++){
      if(z == limite - 1){
        poli.dist[z] = sqrt(pow(poli.x[z] - poli.x[0], 2) + pow(poli.y[z] - poli.y[0], 2));
      }else{
        poli.dist[z] = sqrt(pow(poli.x[z] - poli.x[z + 1], 2) + pow(poli.y[z] - poli.y[z + 1], 2));
      }
    }

    for(int i = 0; i < limite; i++){
      poli.resp =poli.resp+ poli.dist[i];
    }

    printf("Perimetro: %.4lf\n", poli.resp);
  }
}