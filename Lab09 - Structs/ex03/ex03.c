#include <stdio.h>
#include <string.h>
typedef struct 
{
    char rua[20];
    char complemento[20];
    char estado[3];
    char cep[20];
    int numero;
    char cidade[20];
}endereco;

int main(){
    printf("<< ENDERECOS >>\n");
    endereco end[3];
    int i=0;
    while(i<3){
        printf("Digite o nome da rua: ");
        
        gets(end[i].rua);
        printf("Digite o numero da rua: ");
        scanf("%d",&end[i].numero);
        printf("Digite o complemento se houver: ");
        getchar();
        gets(end[i].complemento);
        printf("Digite o nome da cidade: ");
        gets(end[i].cidade);
        printf("Digite o nome do estado: ");        
        gets(end[i].estado);
        printf("Digite o cep: ");
        gets(end[i].cep);
        printf("\n");
        i++;
        
    }
    printf("Enderecos cadastrados que sao de ""MG""\n");
    for(i=0;i<3;i++){
        if(end[i].estado[0]=='M'){
            if(end[i].estado[1]=='G'){

                printf("%s, %d. %s. %s-%s, %s.\n",end[i].rua,end[i].numero,end[i].complemento,end[i].cidade,end[i].estado,end[i].cep);
            }
        }
        
    }

    return 0;
}

/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/