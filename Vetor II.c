//Faça um programa em C que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc, até trocar o 10º com o 11º. Mostre o vetor modificado.

#include <stdio.h>
int main()
{
   int vet[20], inver, inicial, fim;
    for(inicial=0; inicial<20; inicial++)
        scanf("%d",&vet[inicial]);
    for(inicial=0, fim=19; inicial<10; inicial++, fim--)
    {
        inver=vet[inicial];
        vet[inicial]=vet[fim];
        vet[fim]=inver;

    }
    for(inicial=0; inicial<20; inicial++)
        printf("N[%d] = %d\n",inicial,vet[inicial]);
    return 0;
}