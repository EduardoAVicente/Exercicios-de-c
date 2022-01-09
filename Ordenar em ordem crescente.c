
Elaborar um programa cuja entrada são 3 números reais e cuja saída apresenta esses
números em ordem crescente.
Utilize estrutura, dupla precisão e 4 casas depois da vírgula.
Exemplo:

Entrada

2.4 0.9 1.8

Saída

0.9000

1.8000

2.4000

 
#include <stdio.h>
struct Num{
  double n1;
  double n2;
  double n3;
}num;
 
 
 
 
 
int main(){
 
scanf("%lf",&num.n1);
scanf("%lf",&num.n2);
scanf("%lf",&num.n3);
 
 double ordem[3];
 if(num.n1 > num.n2 && num.n1 > num.n3){
  ordem[0] = num.n1;
  if(num.n2 > num.n3){
   ordem[1] = num.n2;
   ordem[2] = num.n3;
  }else{
   ordem[2] = num.n2;
   ordem[1] = num.n3;
  }
 } else if(num.n2 > num.n1 && num.n2 > num.n3){
  ordem[0] = num.n2;
  if(num.n1 > num.n3){
   ordem[1] = num.n1;
   ordem[2] = num.n3;
  }else{
   ordem[2] = num.n1;
   ordem[1] = num.n3;
  }
 }else{
  ordem[0] = num.n3;
  if(num.n1 > num.n2){
   ordem[1] = num.n1;
   ordem[2] = num.n2;
  }else{
   ordem[2] = num.n2;
   ordem[1] = num.n1;
  }
 }
 for(int i = 2; i != -1; i -= 1){
  printf("%.4lf\n", ordem[i]);
 }
}