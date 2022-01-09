/*
Elaborar um programa que informa se  dado um número inteiro e positivo  é primo ou se é composto.
Utilize variável int
Exemplo

Entrada                      Saída

Digite um numero inteiro e positivo: 

13                                Primo

Digite um numero inteiro e positivo: 

45                                Composto
*/
#include <stdio.h>
int e;
int main(void) {
  printf("Digite um numero inteiro e positivo: \n");
  scanf("%d",&e);
  if(e%2==0||e%3==0||e%17==0){
    printf("Composto");
  }
  else{
      printf("Primo");
  }
  return 0;
}