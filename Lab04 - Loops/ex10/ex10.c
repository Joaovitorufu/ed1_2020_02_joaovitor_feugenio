#include <stdio.h>

int main(){
    printf("<< Soma de n valores naturais >>\n");
    int i,soma=0,n;

    printf("Quantos numeros deseja somar ? ");
    scanf("%d",&i);
    n=i;
    while (i>=0)
    {
        soma = soma + i;
        i--;
    }
    printf("A soma dos %d primeiros numeros naturais eh: %d",n,soma);
    
    return 0;
}

/*

*/