/*
Elaborar um programa para exibir a média μ  de n números reais.

μ=∑ni=1xin

Utilize variável float


Exemplo

Entrada

4 1 2 3 4

Saída

Media = 2.500000
*/
#include <stdio.h>
int e;
float r,t,n;


int main(void) {
scanf("%i",&e);
for(int i;i<e;i++){
  scanf("%f",&n);
  r = r+n;
  
}
t=r/e;
printf("Media = %f",t);
}