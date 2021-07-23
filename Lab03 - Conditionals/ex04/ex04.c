#include <stdio.h>

int main(){
    printf("<< Notas da Turma >>\n");
    char aluno1,aluno2,aluno3;
    float n1,n2,n3;
    printf("Entre com o nome do aluno #1: ");
    scanf(" %c",&aluno1);
    printf("Entre com a nota do aluno #1: ");
    scanf(" %f",&n1);
    printf("Entre com o nome do aluno #2: ");
    scanf(" %c",&aluno2);
    printf("Entre com a nota do aluno #2: ");
    scanf(" %f",&n2);
    printf("Entre com o nome do aluno #3: ");
    scanf(" %c",&aluno3);
    printf("Entre com a nota do aluno #3: ");
    scanf(" %f",&n3);

    if(n1>=n2 && n1>=n3 && n2>=n3){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno1,n1,aluno3,n3);
    }else
     if(n1>=n2 && n1>=n3 && n2<=n3){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno1,n1,aluno2,n2);
    }else
    if(n2>=n1 && n2>=n3 && n1>=n3){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno2,n2,aluno3,n3);
    }else
    if(n2>=n1 && n2>=n3 && n1<=n3){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno2,n2,aluno1,n1);
    }else
    if(n3>=n1 && n3>=n2 && n1<=n2){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno3,n3,aluno1,n1);
    }else
    if(n3>=n1 && n3>=n2 && n1>=n2){
        printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",aluno3,n3,aluno2,n2);
    }

    return 0;
}

/*

*/