#include <stdio.h>

int main(){
    printf("<< Calculo do IMC >>\n");
    float imc, kg, altura;
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite seu peso: ");
    scanf("%f",&kg);

    imc = kg/(altura*altura);
    if (imc < 18.5 ){
        printf("Magreza");
    }else
    if (imc>= 18.5 && imc < 24.9 ){
        printf("Saudavel");
    }else
    if (imc >= 25.0 && imc < 29.9){
        printf("Sobrepeso");
    }else
    if (imc >= 30.0 && imc < 34.9){
        printf("Obesidade Grau I");
    }else
    if (imc >= 35.0 && imc< 39.9){
        printf("Obesidade Grau II (severa)");
    }else
    if (imc >=40.0 ){
        printf("Obesidade Grau III (morbida)");
    }
    return 0;
}





/*

*/