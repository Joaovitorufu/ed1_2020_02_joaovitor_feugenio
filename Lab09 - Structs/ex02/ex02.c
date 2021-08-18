#include <stdio.h>
#include <string.h>
struct data{
    int dia;
    char mes[10];
    int ano;
};
int main(){
    int i=0,aux=0;
    struct data date[3];
    printf("<< Data >>\n");
    while(i<3){
        printf("Digite o dia: ");
        scanf("%d",&date[i].dia);
        printf("Digite o mes: ");
        getchar();
        gets(date[i].mes);
        printf("Digite o ano: ");
        scanf("%d",&date[i].ano);
        printf("\n");
        i++;
    }
    printf("<<DATAS CADASTRADAS>>\n");
    for(i=0;i<3;i++){
        printf("Dia %d de %s de %d\n",date[i].dia,date[i].mes,date[i].ano);
        if(aux<date[i].ano){
            aux=date[i].ano;
        }
    }
    printf("\nMaior ano foi: %d",aux);

    return 0;
}

/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/