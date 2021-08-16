#include <stdio.h>

int main(){
    printf("<< Normalizando as notas >>\n");
    int vet[5],i,maior=0,aux;
    float media,vet2[5];
    for(i=0;i<5;i++){
        printf("Entre com a nota do aluno %d: ",i+1);
        scanf("%d",&vet[i]);
        if(vet[i]>maior){
            maior=vet[i];
        }
    }

    
    for(i=0;i<5;i++){
        vet2[i]= ((float)vet[i]/maior)*100;
        printf("A nota do aluno %d eh %d\n",i+1,(int)vet2[i]);
    }

    

    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/