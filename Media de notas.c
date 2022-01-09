///Leia 3 valores, no caso, variáveis Q, L e P, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota Q tem peso 2, a nota L tem peso 3 e a nota P tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

//O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

//Exemplo:

//7.0                                 MEDIA = 6.9
//5.0
//8.0

#include <stdio.h>

int main () 
{
  double Q;
  double L;
  double P;

  scanf("%lf", &Q);
  scanf("%lf", &L);
  scanf("%lf", &P);


 double resultado =  (Q*0.2) + (L*0.3) + (P*0.5);

  
   
  
  printf("MEDIA = %.1lf", resultado);
  
  return 0;
}