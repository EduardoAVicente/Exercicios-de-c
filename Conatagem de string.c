/*
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

int tamanho (char *s)

que retorne o tamanho dessa string.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     11
*/

#include <stdio.h>

int main(void) {
  char palavra[50];
fgets(palavra, 50, stdin);
int quant =0;
int tamanho=0;
while(palavra[tamanho] != '\0')
  tamanho++;

for(int i =0;i<tamanho;i++)
if ('A' <= palavra[i] && palavra[i] <= 'Z') {
  quant++;
} 
printf("%d",quant);
}
