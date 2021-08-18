#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


bool Perfeito(int num){
int raiz;
raiz = sqrt(num);
    if(raiz*raiz=num){
    return true;
    }
    else{
    return false;
} 


int main(){
    int num;
    bool resp;
    printf("Digite o valor de n: ");
    scanf("%d",&num);
    resp = Perfeito(num);
    if(resp == true)printf("O numero %d eh um quadrado perfeito\n",num);
    else printf("o numero %d nao eh um quadrado perfeito\n",num);
    return 0;
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/