#include <stdio.h>

int main(){
    printf("<< Conversor de Temperatura >>\n");

    float n,res;
    char unidade;
    printf("Digite a temperatura: ");
    scanf("%f",&n);
    printf("Digite a unidade: ");
    scanf(" %c",&unidade);
    if(unidade == 'c'){
        res = (n * (9/5.0))+32;
        printf("%.0f graus Celsius equivale a %.0f graus Fahrenheit",n,res);
    }else
    if(unidade == 'f'){
        res = (n - 32) * (5/9.0);
        printf("%.0f graus Fahrenheit equivale a %.0f graus Celsius",n,res);
    }else printf("Unidade Invalida");
    return 0;
}

/*

*/