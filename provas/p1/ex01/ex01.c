#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:


struct livro {
    char nome[20];
    float preco;
    char estado[20];// check:<<<erro: e1.01a: Novo/Usado deve ser booleano (no caso, int) ; Pode-se usar um char, mas com isso exige-se sempre uma comparação de valores>>>>
    int ano;
};

int main(){

    int n,i;
    struct livro *livros;

    printf("Digite quantos livros voce deseja cadastrar: ");
    scanf("%d",&n);
    
    livros = (struct livro *) malloc(n*sizeof(struct livro));
    if(livros == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("pause");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Digite o nome do livro: ");
        getchar();
        gets(livros[i].nome);
        printf("Digite o preco do livro: ");
        scanf("%f",&livros[i].preco);
        printf("Digite o estado do livro: ");
        getchar();
        gets(livros[i].estado);
        printf("Digite o ano do livro: ");
        scanf("%d",&livros[i].ano);
        printf("\n");
    }

    
// check:<<<erro: e1.5: Falou liberar memória com free>>>>
    


    

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
  
    return 0;
}