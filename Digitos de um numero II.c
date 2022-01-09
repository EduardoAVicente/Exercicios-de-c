/*

Crie uma função em C que receba dois números inteiro, n e i e retorne o i-nésimo dígito do número n.

Exemplos:

n=285323 e i=0, deve retornar o número 3
n=285323 e i=3, deve retornar o número 5
n=285323 e i=4, deve retornar o número 8
n=6543210 e i=6, deve retornar o número 6
*/
#include <stdio.h>
#include <math.h>

int digito_em (int n, int indice) {
  int p;
  for(int i;i<indice;i++){
    
    p=n/10;
    

  }
  return p;
}




int main() {
  int e,t,r;
  scanf("%d",&e);
  scanf("%d",&t);
  r=digito_em(e, t);
  printf("%d",r);
  return 0;
}
