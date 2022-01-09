/*
Elabore um programa cuja entrada seja uma data e cuja saída é essa data no formato abaixo:

Utilize estrutura.

Exemplo:

Entrada

Digite o dia:

23

Escreva o mes:

junho

Digite o ano:

2011

Saída

Data: 23/junho/2011
*/
#include <stdio.h>
#include <stdlib.h>


  struct DATA{
    int day;
    char month[10];
    int year;
  }data;

int main(void) {
  struct DATA data;
  printf("Digite o dia:\n");
  scanf("%d", &data.day);
  printf("Escreva o mes:\n");
  scanf("%s", data.month);
  printf("Digite o ano:\n");
  scanf("%d", &data.year); 
  printf("Data: %d/%s/%d",data.day,data.month,data.year);

  return 0;
}