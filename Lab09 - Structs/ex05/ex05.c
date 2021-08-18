#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    int matricula;
    char nome[20];
    float np1;
    float np2;
    float np3;
    float media;
    int faltas;
}alunos;

int main(){
    printf("<< SITUACAO ALUNOS >>\n");
    alunos aluno[3];
    int i;
    float nota1=0,maiorMedia=0,menorMedia=100,soma=0;
    char alunoMaior[20],alunoMenor[20],alunoMnota[20];
    for(i=0;i<3;i++){

    printf("Entre com os dados do %d aluno \n",i+1);
    printf("Matricula: ");
    scanf("%d",&aluno[i].matricula);
    printf("Nome: ");
    getchar();
    gets(aluno[i].nome);
    printf("Nota da 1 prova: ");
    scanf("%f",&aluno[i].np1);
    printf("Nota da 2 prova: ");
    scanf("%f",&aluno[i].np2);
    printf("Nota da 3 prova: ");
    scanf("%f",&aluno[i].np3);
    printf("Numero de faltas: ");
    scanf("%d",&aluno[i].faltas);

    if(nota1<aluno[i].np1){
        nota1=aluno[i].np1;
        strcpy(alunoMnota,aluno[i].nome);

    }

    soma = aluno[i].np1+aluno[i].np2+aluno[i].np3;
    aluno[i].media=soma/3;

    if(maiorMedia<aluno[i].media){
        maiorMedia=aluno[i].media;
        strcpy(alunoMaior,aluno[i].nome);
    }
    if(menorMedia>aluno[i].media){
        menorMedia=aluno[i].media;
        strcpy(alunoMenor,aluno[i].nome);
    }
    

    }
    printf("\nAluno com maior nota na prova 1 foi %s com %.1f pontos.\n",alunoMnota,nota1);
    printf("O aluno com a Maior media foi %s com %.1f pontos\n",alunoMaior,maiorMedia);
    printf("O aluno com a Menor media foi %s com %.1f pontos\n",alunoMenor,menorMedia);
    printf("\nSituacao dos alunos\n");
    for(i=0;i<3;i++){



        if(aluno[i].faltas<=18&&aluno[i].media>=60){
        printf("%d - %s. Aprovado\n",i+1,aluno[i].nome);      
    }else
    if(aluno[i].faltas>18){
        printf("%d - %s. Reprovado por falta\n",i+1,aluno[i].nome);
    }else
    if(aluno[i].media<60){
        printf("%d - %s. Reprovado por nota\n",i+1,aluno[i].nome);
    }
    }

    return 0;
}

/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/