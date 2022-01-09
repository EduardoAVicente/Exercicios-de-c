/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Exemplo:

456767

126:52:47
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int time;
    int hora; 
    int minuto;
    int segundo;

    scanf("%d", &time);
    
    hora = time / 3600;
    time -= hora * 3600;
    minuto = time / 60;
    time -= minuto * 60;
    segundo=time;
    
    printf("%d:%d:%d", hora, minuto,segundo );
    
}