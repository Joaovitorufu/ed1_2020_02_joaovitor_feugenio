#include <stdio.h>

int main(){
    printf("<< Comissao >>\n");
    float total,comissao;
    printf("DIgite o valor da venda Mensal: ");
    scanf("%f",&total);
    if(total >= 100000){
        comissao = 700 + total * 0.16;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    if(total>= 80000 && total < 100000){
        comissao = 650 + total * 0.14;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    if(total>=60000 && total < 80000){
        comissao = 600 + total * 0.14;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    if(total>= 40000 && total < 60000){
        comissao = 550 + total * 0.14;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    if(total>= 20000 && total < 40000){
        comissao = 500 + total * 0.14;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    if(total < 20000){
        comissao = 400 + total * 0.14;
        printf("a comissao que devera ser paga ao vendedor eh : R$%.1f",comissao);
    }
    return 0;
}

/*

*/