

Implemente, de forma recursiva, a série harmônica:

{\displaystyle \sum _{k=1}^{\infty }{\frac {1}{k}}=1+{\frac {1}{2}}+{\frac {1}{3}}+{\frac {1}{4}}+\cdots }


Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
1                                                                1
10                                                              2.9290

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{  
float end,gir=0;

scanf("%f",&end);

while (end>0)
{gir=gir+1/end;
end=end-1;

}

printf("%.4f\n",gir);
}