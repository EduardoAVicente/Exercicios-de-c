/*
Leia dois vetores x=(x1,x2,x3) e y=(y1,y2,y3) com componentes do tipo double.

Defina funções para determinar o produto vetorial  x×y  entre os dois vetores.                 

x×y=(x2y3−x3y2,x3y1−x1y3,x1y2−x2y1)                                                                            

Teste as funções fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

5 4 3                                    Produto Vetorial = (4.00, -2.00, -4.00)

1 0 1
*/
#include <stdio.h>

int main(void) {
  double x[3];
  double y[3];
  double resp[3];
  for(int i=0;i<3;i++){
    scanf("%lf",&x[i]);

  }
    for(int i=0;i<3;i++){
    scanf("%lf",&y[i]);

  }

    resp[0]= (x[1]*y[2]) -(x[2]*y[1]);
    resp[1]= (x[2]*y[0]) -(x[0]*y[2]);
    resp[2]= (x[0]*y[1]) -(x[1]*y[0]);
    printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)",resp[0],resp[1],resp[2]);


  return 0;
}