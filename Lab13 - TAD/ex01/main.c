#include <stdio.h>
#include "ex1.h"

int main (void){
    int i,retorno;
    float sAtual;
    conta a[4];

    printf("Cadastro de contas\n");
   
    for(i=0;i<3;i++){
        printf("Digite o nome do %d titular: ",i+1);
        scanf("%s",a[i].nome);
        printf("Digite o numero do %d titular: ",i+1);
        scanf("%d",&a[i].numConta);
        printf("Digite o saldo do %d titular: ",i+1);
        scanf("%f",&a[i].saldo);
    }
    printf("\nTitulares cadastrados\n");
    for(i=0;i<3;i++){
        printf("%d------------------\n",i+1);
        printf("nome: %s\nnumConta: %d\nsaldo: %f\n",a[i].nome,a[i].numConta,a[i].saldo);
    }
    printf("Alterando saldo das contas\n");
    for(i=0;i<3;i++){
    printf("Digite o saldo atual da conta do %s: ",a[i].nome);
    scanf("%f",&sAtual);
    retorno=alteraSaldo(&a[i], sAtual);
    if(retorno == 1){
        printf("Saldo alterado\n");
    }else{
        printf("Erro\n");
    }
    }

    printf("Saldos alterados\n");
    for(i=0;i<3;i++){
        printf("%d------------------\n",i+1);
        printf("nome: %s\nnumConta: %d\nsaldo: %f\n",a[i].nome,a[i].numConta,a[i].saldo);
    }
    return 0;
}