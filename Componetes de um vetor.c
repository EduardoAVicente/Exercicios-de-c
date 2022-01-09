
Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar a menor distância  entre os componentes dos dois vetores.

Defina uma função para determinar a maior distância  entre os componentes dos dois vetores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

3                                         Menor Distancia: 1.00

1 2 3                                   Maior Distancia: 5.00

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int q;
    scanf("%d",&q);
    double x[q], y [q], xx, yy, tx, my, ddd, mdx, mdy, mdw, mdz;
    for ( int i=0; i<q; i++){
        scanf("%lf",&x[i]);
    }
    for ( int j=0; j<q; j++){
        scanf("%lf",&y[j]);
    }
    if (x[0]< x[1] && x[2]){
        xx = x[0];
    }
    if(x[1]< x[0] && x[2]){
        xx = x[1];
    }
    if(x[2]< x[0] && x[1]){
        xx= x[2];
    }
    if (y[0]< y[1] && y[2]){
        yy = y[0]  ;
    }
    if (y[1]< y[0] && y[2]){
        yy = y[1] ;
    }
    if (y[2]< y[0] && y[1]){
        yy = y[2];
    }
    if (x[0]> x[1] && x[2]){
        tx = x[0];
    };
    if (x[1] > x[0] && x[2]){
        tx = x[1];
    };
    if (x[2]> x[0]&& x[2]){
        tx = x[2];
    };
    if (y[0] > y[1] && y[2]){
        my = y[0];
    }
    if (y[1] > y[0] && y[2]){
        my = y[1];
    }
    if (y[2] > y[1] && y[0]){
        my = y[2];
    } 
    if ( my > tx ){
    ddd = my - xx;
    }
    else{
    ddd = tx + fabs(yy);
    }  
     if (fabs(y[0]-x[0]) < fabs(y[0]-x[1])&& fabs(y[0]-x[2])){
        mdx = fabs(y[0]-x[0]);
    }
    if (fabs(y[0]-x[1]) < fabs(y[0]-x[0]) && fabs(y[0] - x[2])){
        mdx = fabs(y[0] - x[1]);
    }
    if (fabs(y[0]-x[2]) < fabs(y[0]-x[0]) && fabs(y[0] - x[1])){
        mdx = fabs(y[0]-x[2]);
    } 
    if (fabs(y[1]-x[0]) < fabs(y[1]-x[1])&& fabs(y[1]-x[2])){
        mdy = fabs(y[1]-x[0]);
    }
    if (fabs(y[1]-x[1]) < fabs(y[1]-x[0]) && fabs(y[1] - x[2])){
        mdy = fabs(y[1] - x[1]);
    }
    if (fabs(y[1]-x[2]) < fabs(y[1]-x[0]) && fabs(y[1] -x[1])){
        mdy = fabs(y[1]-x[2]);
    }
    if (fabs(y[2]-x[0]) < fabs(y[2]-x[1])&& fabs(y[2]-x[2])){
        mdw = fabs(y[2]-x[0]);
    }
    if (fabs(y[2]-x[1]) < fabs(y[2]-x[0]) && fabs(y[2] - x[2])){
        mdw= fabs(y[1] - x[1]);
    }
    if (fabs(y[2]-x[2]) < fabs(y[2]-x[0]) && fabs(y[2] - x[1])){
        mdw = fabs(y[2]-x[2]);
    }
    if (mdx < mdy && mdw){
        mdz = mdx;
    }
    if(mdy < mdx && mdw){
        mdz = mdy;
    }
    if(mdw < mdx && mdy){
        mdz = mdw;
    } 
    printf("Menor Distancia: %.2lf\n",mdz);
    printf("Maior Distancia: %.2lf",ddd);
}