/*
Leia um vetor com n componentes do tipo int e

defina uma função para inverter os n elementos do vetor.

Exemplo:

Entrada:                             Saída:

5 9 5 3 7 1                          1 7 3 5 9 
*/

#include <stdio.h>

int main(void) {
  int limite=0;
  scanf("%d",&limite);
  int indice=limite-1;
  int vet[limite];
  for(int i=0;i<limite;i++){
    scanf("%d", &vet[i]);
  }
  for(int i=0;i<limite;i++){
    printf("%d ",vet[indice]);
    indice-=1;

  }
  return 0;
}