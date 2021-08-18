#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct telefone
    {
        int ddd;
        char tel[20];
    };

int main(){
    struct telefone tele[3];
    int i=0;
    printf("<< Telefone >>\n");
    while(i<3){
        printf("Digite o DDD: ");
        scanf("%d",&tele[i].ddd);
        printf("Digite o Telefone: ");
        getchar();
        gets(tele[i].tel);
        i++;
    }
    printf("<<Os telefones cadastrados foram>>\n");
    for(i=0;i<3;i++){
        printf("(%d) %s\n",tele[i].ddd,tele[i].tel);
    }

    return 0;
}

/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/