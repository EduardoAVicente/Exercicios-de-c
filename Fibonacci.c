/*
Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.


Exemplo:

Entrada:             Saída:

0                         0

1                         1

2                         1

3                         2

4                         5
*/
#include <stdio.h>

int main(void) {
  int n1, n2, n3, entrada;

  n1 = 1;
  n2 = 1;
  scanf("%d", &entrada);

  for(int i=3;i<=entrada;i++){

  n3 = n1 + n2;
  n1 = n2;
  n2 = n3;
  
  }
  printf("%d", n3);
}