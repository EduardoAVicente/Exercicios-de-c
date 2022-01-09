/*
Elaborar um programa cuja entrada são duas matrizes A de tamanho a×b e um matriz B 
de  tamanho b×c com a,b,c≤4.
A saída é o produto  A⋅B das matrizes.
Utilize dupla precisão e 4 casas decimais depois da vírgula.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k1,k2;
    int linA,colA,linB,colB;
    printf("Tamanho da matriz A:\n");
    scanf("%d",&linA);
    scanf("%d",&colA);
    printf("Tamanho da matriz B:\n");
    scanf("%d",&linB);
    scanf("%d",&colB);

    float A[linA][colA];
    float B[linB][colB];
    float C[linA][colB];
    float temp;

    if(colA!=linB)
    {
        printf("Dados incorretos.\n");

        return 0;
    }



printf("Matriz A:\n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colA;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
printf("Matriz B:\n");
    for(i=0;i<linB;i++)
    {
        for(j=0;j<colB;j++)
        {
            scanf("%f",&B[i][j]);
        }
    }



    for(k1=0;k1<linA;k1++)
    {
        for(k2=0;k2<colB;k2++)
        {
            temp=0.0;
            for(i=0;i<colA;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

printf("Matriz AB:\n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colB;j++)
        {
            if(j!=(colB-1))
            {
                printf(" %.4f ",C[i][j]);
            }
            else
            {
                printf(" %.4f \n",C[i][j]);
            }
        }
    }

    return 0;

}