#include <stdio.h>

int main(){
    printf("<< Soma de n valores naturais >>\n");
    int i,soma=0,n;

    printf("Quantos numeros deseja somar ? ");
    scanf("%d",&i);
    n=i;
    for(i;i>=0;i--){
        soma = soma+i;
    }
   
    printf("A soma dos %d primeiros numeros naturais eh: %d",n,soma);
    
    return 0;
}

/*

*/