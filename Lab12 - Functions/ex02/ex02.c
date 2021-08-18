#include <stdio.h>

DesenhaLinha(int i, int j){
    int n,m;
    for(n=0;n<i;n++){
        for(m=0;m<j;m++){
            printf("=");
        }
        printf("\n");
    }
}

int main(){
    int i,j;
    printf("<< Digite a quantidade de linhas a serem impressas: >>\n");
    scanf("%d",&i);
    printf("digite o tamanho da linha: ");
    scanf("%d",&j);
    DesenhaLinha(i,j);
    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
O procedimento deve ter como argumento um valor que indica
quantos caracteres "=" serão mostrados. 

Ex: DesenhaLinha(4) tem como saída ====; 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário quantas vezes a função 
deverá ser executada e qual o tamanho da linha a ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
Digite o tamanho da linha: 5
=====
=====
=====
-------------------------------------------------------------------------------
*/