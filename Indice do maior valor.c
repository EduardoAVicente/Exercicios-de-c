/*
Leia um vetor Taxas com n componentes do tipo double e

defina uma função para determinar o índice do maior valor dentre os n elementos do vetor  Taxas.

Teste a função fazendo uma chamada dentro da função "main". O resultado deverá ser do tipo int

Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              2
*/

#include <stdio.h>

int main(void) {
  double Taxas[5];
  double maior=0;
  double e;
  int indice=0;
  int limite;
  scanf("%d",&limite);
    for(double i=0;i<limite;i++){
    scanf("%lf",&e);
    Taxas[indice]=e;
    indice +=1;
  }

  indice =0;
  for(int i=0;i<limite;i++){
    if (Taxas[indice]>maior){
      maior = Taxas[indice];

      indice +=1;
    }
    
  }
  indice -=1;
  printf("%d",indice);
  return 0;
}