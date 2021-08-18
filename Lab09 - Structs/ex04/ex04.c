#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//structs
typedef struct
    {
        int ddd;
        char tel[20];
    }telefone;

typedef struct{
    int dia;
    char mes[10];
    int ano;
}data;

typedef struct 
{
    char rua[20];
    char complemento[20];
    char estado[3];
    char cep[20];
    int numero;
    char cidade[20];
}endereco;

typedef struct{
    char nome[20];
    char cpf[20];
    char sexo;
    endereco endComercial;
    char estadoCivil[20];
    endereco endResidencial;
    float salario;
    telefone tele;
    telefone teleResidencial;
    int idade;
    data dataNasc;
    data dataIngresso;
}pessoa;



int main(){
//variaveis
    int i,aux;
    pessoa user[5];
//cadastro dos users
    
    strcpy(user[0].nome,"Cercei Lannister");
    strcpy(user[0].cpf,"111111111-11");
    user[0].sexo='F';
    strcpy(user[0].endComercial.rua,"Colina de Aegon");
    user[0].endComercial.numero=1;
    strcpy(user[0].endComercial.complemento,"Red Keep");
    strcpy(user[0].endComercial.cidade,"Porto Real");
    strcpy(user[0].endComercial.estado,"WE");
    strcpy(user[0].endComercial.cep,"11111-111");
    strcpy(user[0].endResidencial.rua,"Colina de Aegon");
    user[0].endResidencial.numero=1;
    strcpy(user[0].endResidencial.complemento,"Red Keep");
    strcpy(user[0].endResidencial.cidade,"Porto Real");
    strcpy(user[0].endResidencial.estado,"WE");
    strcpy(user[0].endResidencial.cep,"11111-111");
    strcpy(user[0].estadoCivil,"Viuva");
    user[0].salario=111111;
    user[0].tele.ddd=11;
    strcpy(user[0].tele.tel,"91111-1111");
    user[0].teleResidencial.ddd=11;
    strcpy(user[0].teleResidencial.tel,"1111-1111");
    user[0].idade=30;
    user[0].dataNasc.dia=1;
    strcpy(user[0].dataNasc.mes,"Janeiro");
    user[0].dataNasc.ano=262;
    user[0].dataIngresso.dia=1;
    strcpy(user[0].dataIngresso.mes,"Janeiro");
    user[0].dataIngresso.ano=276;


    strcpy(user[1].nome,"John Snow");
    strcpy(user[1].cpf,"222222222-22");
    user[1].sexo='M';
    strcpy(user[1].endComercial.rua,"Norte dos 7 Reinos");
    user[1].endComercial.numero=1;
    strcpy(user[1].endComercial.complemento,"Castelo Negro");
    strcpy(user[1].endComercial.cidade,"A Muralha");
    strcpy(user[1].endComercial.estado,"WE");
    strcpy(user[1].endComercial.cep,"11111-111");
    strcpy(user[1].endResidencial.rua,"Norte dos 7 Reinos");
    user[1].endResidencial.numero=1;
    strcpy(user[1].endResidencial.complemento,"Castelo Negro");
    strcpy(user[1].endResidencial.cidade,"A Muralha");
    strcpy(user[1].endResidencial.estado,"WE");
    strcpy(user[1].endResidencial.cep,"11111-111");
    strcpy(user[1].estadoCivil,"Solteiro");
    user[1].salario=111111;
    user[1].tele.ddd=11;
    strcpy(user[1].tele.tel,"92222-2222");
    user[1].teleResidencial.ddd=11;
    strcpy(user[1].teleResidencial.tel,"2222-2222");
    user[1].idade=30;
    user[1].dataNasc.dia=2;
    strcpy(user[1].dataNasc.mes,"Fevereiro");
    user[1].dataNasc.ano=281;
    user[1].dataIngresso.dia=2;
    strcpy(user[1].dataIngresso.mes,"Fevereiro");
    user[1].dataIngresso.ano=295;


    strcpy(user[2].nome,"Jaime Lannister");
    strcpy(user[2].cpf,"333333333-33");
    user[2].sexo='M';
    strcpy(user[2].endComercial.rua,"Colina de Aegon");
    user[2].endComercial.numero=1;
    strcpy(user[2].endComercial.complemento,"Red Keep");
    strcpy(user[2].endComercial.cidade,"Porto Real");
    strcpy(user[2].endComercial.estado,"WE");
    strcpy(user[2].endComercial.cep,"11111-111");
    strcpy(user[2].endResidencial.rua,"Colina de Aegon");
    user[2].endResidencial.numero=1;
    strcpy(user[2].endResidencial.complemento,"Red Keep");
    strcpy(user[2].endResidencial.cidade,"Porto Real");
    strcpy(user[2].endResidencial.estado,"WE");
    strcpy(user[2].endResidencial.cep,"11111-111");
    strcpy(user[2].estadoCivil,"Solteiro");
    user[2].salario=111111;
    user[2].tele.ddd=11;
    strcpy(user[2].tele.tel,"91111-1111");
    user[2].teleResidencial.ddd=11;
    strcpy(user[2].teleResidencial.tel,"1111-1111");
    user[2].idade=30;
    user[2].dataNasc.dia=1;
    strcpy(user[2].dataNasc.mes,"Janeiro");
    user[2].dataNasc.ano=262;
    user[2].dataIngresso.dia=1;
    strcpy(user[2].dataIngresso.mes,"Janeiro");
    user[2].dataIngresso.ano=276;

    strcpy(user[3].nome,"Samwell Tarly");
    strcpy(user[3].cpf,"444444444-44");
    user[3].sexo='M';
    strcpy(user[3].endComercial.rua,"Norte dos 7 Reinos");
    user[3].endComercial.numero=1;
    strcpy(user[3].endComercial.complemento,"Castelo Negro");
    strcpy(user[3].endComercial.cidade,"A Muralha");
    strcpy(user[3].endComercial.estado,"WE");
    strcpy(user[3].endComercial.cep,"11111-111");
    strcpy(user[3].endResidencial.rua,"Norte dos 7 Reinos");
    user[3].endResidencial.numero=1;
    strcpy(user[3].endResidencial.complemento,"Castelo Negro");
    strcpy(user[3].endResidencial.cidade,"A Muralha");
    strcpy(user[3].endResidencial.estado,"WE");
    strcpy(user[3].endResidencial.cep,"11111-111");
    strcpy(user[3].estadoCivil,"Solteiro");
    user[3].salario=111111;
    user[3].tele.ddd=11;
    strcpy(user[3].tele.tel,"92222-2222");
    user[3].teleResidencial.ddd=11;
    strcpy(user[3].teleResidencial.tel,"2222-2222");
    user[3].idade=30;
    user[3].dataNasc.dia=2;
    strcpy(user[3].dataNasc.mes,"Fevereiro");
    user[3].dataNasc.ano=1998;
    user[3].dataIngresso.dia=2;
    strcpy(user[3].dataIngresso.mes,"Fevereiro");
    user[3].dataIngresso.ano=295;


    strcpy(user[4].nome,"Jfrei Lannister");
    strcpy(user[4].cpf,"111111111-11");
    user[4].sexo='F';
    strcpy(user[4].endComercial.rua,"Colina de Aegon");
    user[4].endComercial.numero=1;
    strcpy(user[4].endComercial.complemento,"Red Keep");
    strcpy(user[4].endComercial.cidade,"Porto Real");
    strcpy(user[4].endComercial.estado,"WE");
    strcpy(user[4].endComercial.cep,"11111-111");
    strcpy(user[4].endResidencial.rua,"Colina de Aegon");
    user[4].endResidencial.numero=1;
    strcpy(user[4].endResidencial.complemento,"Red Keep");
    strcpy(user[4].endResidencial.cidade,"Porto Real");
    strcpy(user[4].endResidencial.estado,"WE");
    strcpy(user[4].endResidencial.cep,"11111-111");
    strcpy(user[4].estadoCivil,"Solteiro");
    user[4].salario=111111;
    user[4].tele.ddd=11;
    strcpy(user[4].tele.tel,"91111-1111");
    user[4].teleResidencial.ddd=11;
    strcpy(user[4].teleResidencial.tel,"1111-1111");
    user[4].idade=20;
    user[4].dataNasc.dia=1;
    strcpy(user[4].dataNasc.mes,"Janeiro");
    user[4].dataNasc.ano=292;
    user[4].dataIngresso.dia=1;
    strcpy(user[4].dataIngresso.mes,"Janeiro");
    user[4].dataIngresso.ano=296;

    


    do
    {
        printf("\t\t<<MENU>>\n");
    
        printf("1 - Listar todos os cadastros\n");
        printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
        printf("3 - Listar as pessoas que nasceram depois de 1990.\n");
        printf("4 - Copiar dados de um cadastro para outro\n");
        printf("0 - Sair\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d",&aux);

    

    if(aux==1){
        printf("<<USUARIOS CADASTRADOS\n");
        for(i=0;i<5;i++){
            printf("posicao: %d\n",i);
            printf("Informacoes Pessoais\n");
            printf("Nome: %s, CPF: %s, Sexo: %c, Estado Civil: %s\n",user[i].nome,user[i].cpf,user[i].sexo,user[i].estadoCivil);
            printf("Salario: %.0f\n",user[i].salario);
            printf("Telefone residencial: (%d) %s\n",user[i].teleResidencial.ddd,user[i].teleResidencial.tel);
            printf("Telefone: (%d) %s\n",user[i].tele.ddd,user[i].tele.tel);
            printf("Data de Nascimento: %d de %s de %d\n",user[i].dataNasc.dia,user[i].dataNasc.mes,user[i].dataNasc.ano);
            printf("Data de Ingresso: %d de %s de %d\n",user[i].dataIngresso.dia,user[i].dataIngresso.mes,user[i].dataIngresso.ano);
            printf("Endereco comercial:\n");
            printf("Rua: %s, Nro: %d, Complemento: %s, Cidade: %s\nEstado: %s, CEP: %s\n\n ",user[i].endComercial.rua,user[i].endComercial.numero,user[i].endComercial.complemento,user[i].endComercial.cidade,user[i].endComercial.estado,user[i].endComercial.cep);
            printf("Rua: %s, Nro: %d, Complemento: %s, Cidade: %s\nEstado: %s, CEP: %s\n\n ",user[i].endResidencial.rua,user[i].endResidencial.numero,user[i].endResidencial.complemento,user[i].endResidencial.cidade,user[i].endResidencial.estado,user[i].endResidencial.cep);
            printf("--------------------------------------------------------------------\n");

        }

    }
    if(aux==2){
        int j;
        printf("\nEscolha uma posicao: ");
        scanf("%d", &j);
        for(j=0;j<1;j++){
            printf("Nome: ");
            getchar();
            gets(user[j].nome);

            printf("CPF:  ");
            gets(user[j].cpf);

            printf("Sexo: ");
            scanf("%c",&user[j].sexo);

            printf("Estado Civil: ");
            getchar();
            gets(user[j].estadoCivil);

            printf("Salario: ");
            scanf("%.0f",&user[j].salario);

            printf("Telefone residencial: \n");
            printf("DDD: ");
            scanf("%d",&user[j].teleResidencial.ddd);
            printf("Numero: ");
            getchar();
            gets(user[j].teleResidencial.tel);

            printf("Telefone: \n");
            printf("DDD: ");
            scanf("%d",&user[j].tele.ddd);
            printf("Numero: ");
            getchar();
            gets(user[j].tele.tel);

            printf("Data de Nascimento: \n");
            printf("Dia: ");
            scanf("%d",&user[j].dataNasc.dia);
            printf("Mes: ");
            getchar();
            gets(user[j].dataNasc.mes);
            printf("Ano: ");
            scanf("%d",&user[j].dataNasc.ano);

            printf("Data de Ingresso: \n");
            printf("Dia: ");
            scanf("%d",&user[j].dataIngresso.dia);

            printf("Mes: ");
            getchar();
            gets(user[j].dataIngresso.mes);
            printf("Ano: ");
            scanf("%d",&user[j].dataIngresso.ano);
            //parei aqui

            printf("Endereco comercial: \n");
            printf("Rua: ");
            getchar();
            gets(user[j].endComercial.rua);
            printf("Nro: ");
            scanf("%d",&user[j].endComercial.numero);
            printf("Complemento: ");
            getchar();
            gets(user[j].endComercial.complemento);
            printf("Cidade: ");
            gets(user[j].endComercial.cidade);
            printf("Estado: ");
            gets(user[j].endComercial.estado);
            printf("CEP: ");
            gets(user[j].endComercial.cep);

            printf("Endereco residencial: \n");
            printf("Rua: ");
            
            gets(user[j].endResidencial.rua);
            printf("Nro: ");
            scanf("%d",&user[j].endResidencial.numero);
            printf("Complemento: ");
            getchar();
            gets(user[j].endResidencial.complemento);
            printf("Cidade: ");
            gets(user[j].endResidencial.cidade);
            printf("Estado: ");
            gets(user[j].endResidencial.estado);
            printf("CEP: ");
            gets(user[j].endResidencial.cep);


        }
    }
    if(aux==3){
        printf("<<LISTA DE PESSOAS QUE NASCERAM DEPOIS DE 1990>>\n\n");
        for(i=0;i<5;i++){
            if(user[i].dataNasc.ano>1990){
                printf("%d - %s\n",i+1,user[i].nome);
            }
        }
        printf("\n");
    }
    if(aux==4){
        int pos1,pos2;
        printf("Digite a posicao que deseja copiar: ");
        scanf("%d",&pos1);
        printf("Digite a posicao que sera modificada: ");
        scanf("%d",&pos2);
        strcpy(user[pos2].nome,user[pos1].nome);
        strcpy(user[pos2].cpf,user[pos1].cpf);
        user[pos2].sexo=user[pos1].sexo;
        strcpy(user[pos2].endComercial.rua,user[pos1].endComercial.rua);
        user[pos2].endComercial.numero=user[pos1].endComercial.numero;
        strcpy(user[pos2].endComercial.complemento,user[pos1].endComercial.complemento);
        strcpy(user[pos2].endComercial.cidade,user[pos1].endComercial.cidade);
        strcpy(user[pos2].endComercial.estado,user[pos1].endComercial.estado);
        strcpy(user[pos2].endComercial.cep,user[pos1].endComercial.cep);

        strcpy(user[pos2].endResidencial.rua,user[pos1].endResidencial.rua);
        user[pos2].endResidencial.numero=user[pos1].endResidencial.numero;
        strcpy(user[pos2].endResidencial.complemento,user[pos1].endResidencial.complemento);
        strcpy(user[pos2].endResidencial.cidade,user[pos1].endResidencial.cidade);
        strcpy(user[pos2].endResidencial.estado,user[pos1].endResidencial.estado);
        strcpy(user[pos2].endResidencial.cep,user[pos1].endResidencial.cep);

        strcpy(user[pos2].estadoCivil,user[pos1].estadoCivil);
        user[pos2].salario=user[pos1].salario;

        strcpy(user[pos2].teleResidencial.tel,user[pos1].teleResidencial.tel);
        user[pos2].teleResidencial.ddd=user[pos1].teleResidencial.ddd;

        strcpy(user[pos2].tele.tel,user[pos1].tele.tel);
        user[pos2].tele.ddd=user[pos1].tele.ddd;

        user[pos2].dataNasc.dia=user[pos1].dataNasc.dia;
        strcpy(user[pos2].dataNasc.mes,user[pos1].dataNasc.mes);
        user[pos2].dataNasc.ano=user[pos1].dataNasc.ano;

        user[pos2].dataIngresso.dia=user[pos1].dataIngresso.dia;
        strcpy(user[pos2].dataIngresso.mes,user[pos1].dataIngresso.mes);
        user[pos2].dataIngresso.ano=user[pos1].dataIngresso.ano;

        
        
        
    }
    } while (aux!=0);
    
    

    return 0;
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/