/*
Determinar se, dados os comprimentos de 3 varetas, é ou não é possível
formar um triângulo. (Utilize números inteiros)
Exemplo de Entrada:               Exemplo de Saída:
5 3 4                             S   
5 3 9                             N
*/
#include <stdio.h>

int a,b,c;
int main(void) {

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);


if (a + b > c && b + c > a && a + c > b)
    printf("S");
else
  printf("N");
  return 0;
}