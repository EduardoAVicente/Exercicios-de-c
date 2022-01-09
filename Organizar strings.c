/*
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. 
As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.


Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

Tpo oCder                           TopCoder                  

aa bb                                   abab
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
  int tam = 60;
  char p1[tam];
  char p2[tam];
  int tam1, tam2,maior;
  scanf("%s",p1);
  scanf("%s",p2);
  tam1 = strlen(p1);
  tam2 = strlen(p2);
  if(tam1 < tam2){
   maior = tam2;}
  else {
    maior = tam1;}
  for (int j = 0; j < maior; ++j){
    if(j<tam1)printf("%c", p1[j]);
    if(j<tam2)printf("%c", p2[j]);
  }
  return 0;
}
