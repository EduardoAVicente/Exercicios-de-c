/*
Leia um vetor com n componentes do tipo int e

defina uma função busca para retornar o índice de onde um valor dado foi encontrado ou -1.

Teste a função fazendo uma chamada dentro da função "main".

Exemplo:

Entrada:                             Saída:

5 9 7 6 3 2                           2

6

3 4 6 7                                -1

1
*/
#include <stdio.h>

int main(void) {
  int limite =0;
  int e=0;

  scanf("%d",&limite);
  int x[limite];

  for(int i=0;i<limite;i++){
    scanf("%d",&x[i]);
  }
  scanf("%d",&e);

    for(int i=0;i<limite;i++){
    if(x[i]==e){
      printf("Busca: %d",i);
      return 0;
    }
  
  }
      printf("Busca: -1");
  
}