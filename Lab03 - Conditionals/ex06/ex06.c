#include <stdio.h>
#include <math.h>

int main(){
    printf("<< Quadrado Perfeito >>\n");
    int num,raiz;
    printf("Digite um numero: ");
    scanf("%d",&num);
    raiz=sqrt(num);
    if(raiz*raiz == num){
        printf("%d eh quadrado perfeito",num);
    }else printf("%d Nao eh quadrado perfeito",num);
    return 0;
}

/*

*/