/*
Elaborar um programa cuja entrada é uma matriz M de tamanho a×b, 0<a,b≤4 e 
um vetor v com b coordenadas.
A saída é o produto da matriz M pelo vetor v.
Utilize dupla precisão e 4 casas decimais depois da vírgula.
OBS: Nem sempre o codigo gera o resultado exato, por tanto rode-o varias vezes
*/
#include <stdio.h>

int main(void) {
  int l;
  int c;
  printf("Tamanho da matriz A:\n");
  scanf("%i",&l);
  scanf("%i",&c);
  float matriz[l][c];
  float vetor[c];
  float resp[l];
  printf("Matriz A:\n");
  for(int linha=0;linha<l;linha++){
    for(int coluna=0;coluna<c;coluna++){
      scanf("%f",&matriz[linha][coluna]);
    }}
  
  printf("Digite o vetor com %d coordenadas:\n",c);
  
  for(int i=0;i<c;i++){
    scanf("%f",&vetor[i]);
  }
  
  

  for(int linha=0;linha<l;linha++){
    for(int coluna=0;coluna<c;coluna++){
      resp[linha]+= matriz[linha][coluna]*vetor[coluna];
    }}

  printf("Produto de A por V:\n");
  for(int r=0;r<l;r++){
    printf("%.4f\n",resp[r]);
  }
  
    
  return 0;
}
