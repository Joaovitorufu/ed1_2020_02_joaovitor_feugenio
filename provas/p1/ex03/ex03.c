#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência a porcentagem>>>>
// check:<<<erro: e3.2: Faltou testar os valores inválidos dentro da função / teste errado / faltou alguns testes>>>>
int clucro(int pcompra, int pvenda){// check:<<<erro: valores de compra devem ser reais, nao inteiros>>>>
    int lb;
    float total;
    lb = pvenda - pcompra;
// check:<<<erro: e3.3: Cálculo com erros (não corresponde a porcentagem pedida OU erro na fórmula OU porcentagem baseada na venda e não na compra OU divisão inteira )>>>>
    total = lb/(float)pvenda;
    total=total*100;


if(total>40){
    return 4;
}else
if(total>20 && total <= 40){
    return 3;
}else
if(total>0&& total <=20){
    return 2;
    }
else
if(total<0){
    return 1;
}else return -1;
    // check:<<<comentário: e3.4: o último teste é desnecessário E/OU alguns testes no IF são desnecessários>>>>
}
int main(){
    int pcompra,pvenda,ret;

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   printf("Digite o preco de compra:");
    scanf("%d",&pcompra);
   printf("Digite o preco de venda:");
    scanf("%d",&pvenda);
   ret=clucro(pcompra,pvenda);
// check:<<<erro: e3.5a: Não mostrou a porcentagem>>>>
// check:<<<erro: e3.6: e3.6: Chamada de função com erros (parâmetro de entrada e/ou saída) ou faltando a passagem por referência>>>>

   if(ret==1)printf("preco de compra: %d; preco de venda: %d;prejuizo\n",pcompra,pvenda);
 // check:<<<erro: else?>>>>
   if(ret==2)printf("preco de compra: %d; preco de venda: %d;lucro pequeno\n",pcompra,pvenda);
   if(ret==3)printf("preco de compra: %d; preco de venda: %d;lucro bom\n",pcompra,pvenda);
   if(ret==4)printf("preco de compra: %d; preco de venda: %d;lucro alto\n",pcompra,pvenda);
   if(ret==-1)printf("valor invalido\n");

   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}