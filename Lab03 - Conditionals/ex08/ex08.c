#include <stdio.h>
#include <math.h>

int main(){
    printf("<< Raizes da Equacao >>\n");
    float a,b,c,delta,raiz1,raiz2,imaginaria;
    printf("Digite o primeiro coeficiente da equacao: ");
    scanf("%f",&a);
    printf("Digite o segundo coeficiente da equacao: ");
    scanf("%f",&b);
    printf("Digite o terceiro coeficiente da equacao: ");
    scanf("%f",&c);

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        delta = - delta;
        raiz1 = -b/(2*a);
        imaginaria = sqrt(delta)/(2*a);
       if(imaginaria>0){
        printf("as raizes sao %.1f + %.1fi e %.1f - %.1fi",raiz1,imaginaria,raiz1,imaginaria);

       }else if(imaginaria < 0){

        printf("as raizes sao %.1f + %.1fi e %.1f - %.1fi",raiz1,imaginaria *-1,raiz1,imaginaria *-1);
       }
    }else
    if(delta > 0 ){
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
    printf("as raizes sao %.1f e %.1f",raiz1,raiz2);

    }else
      {
        raiz1 = -b/(2* a);
     printf("a raiz eh %.1f",raiz1);
     }

    return 0;
}


/*
    terminar depois ainda esta incompleto
    complexas erradas
*/