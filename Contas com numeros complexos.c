/*
Elaborar um programa cuja entrada são 2 números complexos:
Utilize estrutura 
struct Ponto
{
	double R;
	double I;
};
Apresente um menu de opções com a saída selecionada.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Ponto
{
	double R;
	double I;
}point;

void impri(double r, double i){
        printf("Parte Real: %.4lf\n",r);
        printf("Parte Imaginaria: %.4lf\n",i);
        printf("%.4lf + (%.4lf)i", r, i);
}


void leiaPonto(struct Ponto *p)
{
  printf("Digite o valor da parte Real:\n");
	scanf("%lf", &( (*p).R ) );
  printf("Digite o valor da parte Imaginaria:\n");
	scanf("%lf", &( (*p).I )  );
	printf("%.4lf + (%.4lf)i\n", (*p).R, p->I);
}


	

int menu()
{

    puts("");
    puts("=============");
    puts("1 - Adicao   ");
    puts("2 - Multiplicacao  ");
    puts("3 - Divisao  ");
    puts("4 - Modulo  z1  ");
    puts("5 - Modulo  z2  ");
    puts("6 - Conjugado  z1  ");
    puts("7 - Conjugado  z2  ");
    puts("0 - Sair  ");
    printf("opcao => ");
    int op;
    scanf("%d", &op);

    return op;
}


int main(void)
{
	struct Ponto z1;
	struct Ponto z2;

	leiaPonto( &z1 );
	leiaPonto( &z2 );

    int op = menu();
    if(op == 1)
    {
        printf("\nAdicao\n");
        double sR = z1.R + z2.R;
        double sI = z1.I + z2.I;
        impri(sR,sI);

    }
    else if(op == 2)
    {
        printf("\nMultiplicacao\n");
        double resp = (z1.R * z2.R) - (z1.I * z2.I);
        double resp1 = (z1.R * z2.I) + (z1.I * z2.R);
        impri(resp, resp1);

    }
    else if(op == 3)
    {

      double n1 = (z1.R * z2.R) + (z1.I * z2.I);
      double n2 = (z1.I * z2.R) - (z1.R * z2.I);
      double n3 = (z2.R * z2.R) + (z2.I * z2.I);
      double Real = n1/n3;
      double imaginaria = n2/n3;
      impri(Real, imaginaria);



    }
    else if(op == 4)
    {
        printf("\nModulo\n");
        double modulo = sqrt(pow(z1.R,2) + pow(z1.I, 2));
        printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", z1.R, z1.I, modulo);
    }
    else if(op == 5)
    {
        printf("\nModulo\n");
        double modulo = sqrt(pow(z2.R,2) + pow(z2.I, 2));
        printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", z2.R, z2.I, modulo);
    }
    else if(op == 6)
    {
        printf("\nConjugado\n");
        double conjugadoZ1 = z1.I*(-1);
        impri(z1.R, conjugadoZ1);
    }
    else if(op == 7)
    {
        printf("\nConjugado\n");
        double conjugadoZ2 = z2.I*(-1);
        impri(z2.R, conjugadoZ2);
    }

	return 0;
}