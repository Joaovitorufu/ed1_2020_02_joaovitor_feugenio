#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char nome[50],cpf[50],rg[50],end[50],cid[50],est[6],cep[50];
    printf("Digite seu Nome: ");
    gets(nome);
    printf("Digite seu CPF: ");
    gets(cpf);
    printf("Digite seu RG: ");
    gets(rg);
    printf("Digite seu endereco: ");
    gets(end);
    printf("Digite sua cidade: ");
    gets(cid);
    printf("Digite o estado: ");
    gets(est);
    printf("Digite o cep: ");
    gets(cep);

    printf("\t\tD E C L A R A C A O\t\t\n\n");
    printf("Eu, %s, RG %s, CPF %s, residente a %s, %s-%s, CEP %s venho por meio desta declarar que vou estudar para a prova.\n",nome,rg,cpf,end,cid,est,cep);
    

    return 0;
}

/*

*/