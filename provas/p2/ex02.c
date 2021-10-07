/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

*/
#define MAX 100
struct lista
 {
    int qtd;
    struct aluno dados[MAX];
 };

int remove_intervalo_lista(lista *li,int pos1 ,int pos2){
    int remover = pos2 +1 - pos1;
    int i=pos1;
    if (li == NULL)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
   if (pos2 <=0 || pos2 > li->qtd)
        return -1;   
        // check:<<<erro: e2.2: erro em testes de tamanho da lista com as posições de remoção (posições aceitas >=1 <=qtd/ teste de lista null // start>end>>>>
        // check:<<<erro: e2.3: Um só laço deve ser usado O(n). Da forma como está envolve deslocar os mesmos elementos várias vezes O(N²)>>>>
    while(i <= remover){
    for(int j = i; j < li->qtd-1 ; j++){
        li->dados[j] = li->dados[j+1];
    }

    li->qtd--;
    i++;
    }
    return 0;
}