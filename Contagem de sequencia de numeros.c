/*
Dada uma sequência de n números inteiros imprimir quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.

Obs.: Utilizar Bubble Sort

Exemplo:

Entrada:                                                   
7
9
11
9
13
5
11
11
Saída:
5 aparece 1 vez(es)
9 aparece 2 vez(es)
11 aparece 3 vez(es)
13 aparece 1 vez(es)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define limite 10000
int lin[limite];
int n[limite];

int main(int argc,char *argv[]){
 int steve,erhg;
 scanf("%d",&steve);

 for(erhg=0;erhg<limite;erhg++)lin[erhg]=0;
 for(erhg=0;erhg<steve;erhg++){
  scanf("%d",&n[erhg]);
 }
 for(erhg=0;erhg<steve;erhg++){
  lin[n[erhg]]++;
 }
 for(erhg=0;erhg<limite;erhg++){
  if(lin[erhg]!=0)
   printf("%d aparece %d vez(es)\n",erhg,lin[erhg]);
 }
 return 0;
}
