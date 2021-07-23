#include <stdio.h>

int main(){
    printf("<< Valor do Produto com imposto >>\n");
    float produto;
    int codigo;
    printf("Digite o valor do produto R$: ");
    scanf("%f",&produto);
    printf("Digite a unidade da federacao: ");
    scanf("%d",&codigo);
    if(codigo == 1){
        produto = (produto * 0.07)+produto;
        printf("Valor final com impostos R$: %.2f",produto);
    }else
    if(codigo == 2){
        produto = (produto * 0.12)+produto;
        printf("Valor final com impostos R$: %.2f",produto);
    }else
    if(codigo == 3){
        produto = (produto * 0.15)+produto;
        printf("Valor final com impostos R$: %.2f",produto);
    }else
    if(codigo == 4){
        produto = (produto * 0.08)+produto;
        printf("Valor final com impostos R$: %.2f",produto);
    }else printf("Erro!!!!");
    return 0;
}

/*

*/