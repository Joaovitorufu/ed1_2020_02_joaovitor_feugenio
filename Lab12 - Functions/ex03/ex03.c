#include <stdio.h>

DesenhaLinha(int n){
    int i;
    for(i=0;i<n;i++){
    printf("=");
    }
    printf("\n");
}
fatorial(long int fat){
    int i;
    long int fatorial=1;
    for(i=0;i<fat;i++){
        fatorial *= i+1;
    }
    return fatorial;
}

int main(){
    int n;
    long int fat,fatRetorno;
    printf("Digite o tamanho da linha: ");
    scanf("%d",&n);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&fat);
    fatRetorno=fatorial(fat);

    DesenhaLinha(n);
    printf("%ld\n",fatRetorno);
    DesenhaLinha(n);

    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/