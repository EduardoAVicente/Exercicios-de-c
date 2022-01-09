/*
Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar a média entre os n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              0.86
*/

#include <stdio.h>

int main(void) {
  int limite=0;
  double soma=0;
  scanf("%d",&limite);

  double vet[limite];
  for(int i=0;i<limite;i++){
    scanf("%lf", &vet[i]);
  }
   for(int i=0;i<limite;i++){
    soma += vet[i];
  }
  soma=soma/limite;
  printf("%.2lf",soma);
      
}