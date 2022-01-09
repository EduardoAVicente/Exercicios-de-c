//Crie uma função e C que retorne a maior raiz de uma equação de segundo grau na forma a.x2+b.x+c=0, dados seus coeficientes a, b e c. Caso a raiz seja imaginária ou os coeficientes estejam inválidos, retorne 0.

float maiorRaiz (float a, float b, float c) {
    float d,x1,x2,resposta;
    d=(b*b)-(4*a*c);
       if(d<0){
        return 0;
    }
    d=sqrt(d);
    x1=(b*-1-d)/2*a;
    x2=(b*-1+d)/2*a;
    if(d<0){
      return 0;
    }
    else if (x1>x2){
      resposta= x1;
    }
    else{
      resposta= x2;
    }
    return resposta;
}
