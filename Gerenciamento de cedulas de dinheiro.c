/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Exemplo:

576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
*/
#include <stdio.h>

int main() {
  int d;
  int n100=0;
  int n50=0;
  int n20=0;
  int n10=0;
  int n5 = 0;
  int n2=0;
  int n1=0;
  
  scanf("%d",&d);
  n100=d/100;

  d = ((n100*100)-d);//70
  n50 = (d/50)*-1;
  d = d*-1;
  d = (n50*50)-d;
  n20 = (d/20)*-1;

  d =d-((n20*20)*-1);

  n10 = (d/10)*-1;

  d =d-((n10*10)*-1);

  n5 = (d/5)*-1;

  d =d-((n5*5)*-1);

  n2 = (d/2)*-1;

  d =d-((n2*2))*-1;

  n1 = (d/1)*-1;



  printf("%d nota(s) de R$ 100,00 \n",n100);
  printf("%d nota(s) de R$ 50,00 \n",n50);
  printf("%d nota(s) de R$ 20,00 \n" ,n20);
  printf("%d nota(s) de R$ 10,00 \n",n10);
  printf("%d nota(s) de R$ 5,00 \n" ,n5);
  printf("%d nota(s) de R$ 2,00 \n",n2);
  printf("%d nota(s) de R$ 1,00 \n" ,n1);
  }