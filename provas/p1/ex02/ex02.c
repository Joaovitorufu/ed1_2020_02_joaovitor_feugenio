#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livro {
    char nome[20];
    float preco;
    char estado[20];
    int ano;
};
// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)


// check:<<<erro: e2.5: a busca deve considerar somente os livros usados>>>>
// check:<<<erro: e2.6aa: Na busca está ocorrendo somente a comparação o menor/maior e este não está sendo atualizado>>>>
// check:<<<erro: e2.6c: está comparando índice com o valor do ano>>>>
// check:<<<erro: e2.6d: se todos os livros são novos o programa vai retornar errado>>>>

void buscar (struct livro *p,int n,int *pantigo){
    int i,lantigo=10000;
    for(i=0;i<n;i++){

    if(lantigo>p[i].ano){
        *pantigo=i;
    }
    }
}

int main(){
    int n,i,pantigo;
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
    // check:<<<comentário: nesse exercicio podia fazer por retorno>>>>
    buscar(livros,n,&pantigo);
   printf("Livro usado mais antigo: \n");
    printf("nome: %s\npreco: %.2f\nestado: %s\nano:%d\n",livros[pantigo].nome,livros[pantigo].preco,livros[pantigo].estado,livros[pantigo].ano);


   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)

  
    return 0;
}





    