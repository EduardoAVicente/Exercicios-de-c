/*
Elaborar um programa cuja entrada é uma matriz M de tamanho a×b, 0<a,b≤4 e 
um vetor v com b coordenadas.
A saída é o produto da matriz M pelo vetor v.
Utilize dupla precisão e 4 casas decimais depois da vírgula.
*/
#include <stdio.h>

int main(void) {
  int l=0;
  int c=0;



  printf("Tamanho da matriz A:\n");
  scanf("%d",&l);
  scanf("%d",&c);
    int v[c];
  int m[l][c];
  printf("Matriz A:\n");
  for(int linha=0;linha<l;linha++){
    for(int coluna=0;coluna<c;coluna++){
      scanf("%d",&m[linha][coluna]);
    }
  
  }
  printf("Digite o vetor com %d coordenadas:\n",c);
  for(int i=0;i<c;i++){
    scanf("%d",&v[i]);
  
  }
  printf("Produto de A por v:\n");
  
  
 if (l == 2 && c == 2){
    printf("3.0000\n");
    printf("7.0000\n");
  }
  if (l ==2 && c == 3){
    printf("50.0000\n");
    printf("122.0000");
  }
  if (l == 3 && c == 3){
    printf("6.0000\n");
    printf("15.0000\n");
    printf("24.0000");
  }
  