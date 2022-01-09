/*
Bruna acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada


Desenvolva um algoritmo em C, aonde a primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída


Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int entrada;
  scanf("%d", &entrada);
  if (entrada>=1) {
    int tatu=0;
    int Catatau=0, Romeu=0, Sapu=0;

    for (int i = 0; i<entrada; i++) {
      int batata;
      char Lindo;
      scanf("%d %c", &batata, &Lindo);
      if (Lindo == 'C') {
        Catatau += batata;
      } else if (Lindo == 'R') {
        Romeu += batata;
      } if (Lindo == 'S') {
        Sapu += batata;
      }
    }
    tatu = Catatau + Romeu + Sapu;

    printf("Total: %d cobaias\n", tatu);

    printf("Total de coelhos: %d\n", Catatau);
    printf("Total de ratos: %d\n", Romeu);
    printf("Total de sapos: %d\n", Sapu);
    printf("Percentual de coelhos: %.2lf%%\n", ((float)Catatau / tatu) * 100);
    printf("Percentual de ratos: %.2lf%%\n", ((float)Romeu / tatu) * 100);
    printf("Percentual de sapos: %.2lf%%\n", ((float)Sapu / tatu) * 100);
  }
}