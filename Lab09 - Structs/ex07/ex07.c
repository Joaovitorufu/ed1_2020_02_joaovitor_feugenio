#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char nome[20];
	double pot;
	double tempo;
} Eletro;

int main() {
  
	int dias,i;
	double conTotal = 0.0, conRelativo[5] = {0};
	Eletro vet[5];
	for (i = 0; i < 5; i++) {
		printf("Informe os dados do %d eletrodomestico\n", i+1);
		printf("Nome: ");
		fgets(vet[i].nome, 20, stdin);
		vet[i].nome[strcspn(vet[i].nome, "\n")] = '\0';
		printf("Potencia: ");
		scanf("%lf", &vet[i].pot);
		printf("Tempo ativo por dia: ");
		scanf("%lf", &vet[i].tempo);
		getchar();
		conRelativo[i] = vet[i].pot * vet[i].tempo;
		conTotal += conRelativo[i];
		printf("\n");
	}
	printf("Informe um valor de tempo(em dia):\n");
	scanf("%d", &dias);

	conTotal *= dias;
	for (i = 0; i < 5; i++) {
		conRelativo[i] *= dias;
	}

	printf("\nConsumo total: %.0lf kW\n\n", conTotal);
	printf("Consumo relativo:\n");
	for (i = 0; i < 5; i++) {
		printf("%s %.1lf%%\n", vet[i].nome,(conRelativo[i]*100)/conTotal);
	}
	printf("Mapa de memoria:\n\n");
	for(i=0;i<5;i++)
	{
	  printf("Enderecos do %d eletrodomestico\n",i+1);
	  printf("Endereco Nome: %x\nEndereco Potencia: %x\nEndereco Tempo ativo: %x\n\n",&vet[i].nome,&vet[i].pot,&vet[i].tempo); 
	}
}

/*
7.Desenhe, utilizando uma planilha eletrônica, o mapa de memória real para as variáveis
 da estrutura do exercício 6. Para isso, faça um nova cópia do projeto do exercício 6 e 
 modifique-o inserindo no final do programa um printf para o endereço de cada variável. 
 Na resposta a esse exercício coloque o código e a planilha (insira ela no documento em 
 que é apresentada a resposta da prática – não enviar arquivo separado!)

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%

Enderecos de memoria: 

Enderecos 1º eletrodomestico
Endereco Nome: 0x7ffd81835ef0
Endereco Potencia: 0x7ffd81835f00
Endereco Tempo ativo: 0x7ffd81835f04

Enderecos 2º eletrodomestico
Endereco Nome: 0x7ffd81835f0c
Endereco Potencia: 0x7ffd81835f1c
Endereco Tempo ativo: 0x7ffd81835f20

Enderecos 3º eletrodomestico
Endereco Nome: 0x7ffd81835f28
Endereco Potencia: 0x7ffd81835f38
Endereco Tempo ativo: 0x7ffd81835f3c

Enderecos 4º eletrodomestico
Endereco Nome: 0x7ffd81835f44
Endereco Potencia: 0x7ffd81835f54
Endereco Tempo ativo: 0x7ffd81835f58

Enderecos 5º eletrodomestico
Endereco Nome: 0x7ffd81835f60
Endereco Potencia: 0x7ffd81835f70
Endereco Tempo ativo: 0x7ffd81835f74
-------------------------------------------------------------------------------


Mapa de memória (altere os endereços)
+----------+----------------+---------------+------+--+
|          |     Blocos     |               |      |  |
| Endereço |       (1 byte) | Nome variável | Tipo |  |
+----------+----------------+---------------+------+--+
| 0 / NULL |   indefinido   |      ----     | ---- |  |
+----------+----------------+---------------+------+--+
| 60fde8   |                |   Geladeira   |vet[0]|  | 
+----------+----------------+---------------+------+--+
|     2    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     3    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     4    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     5    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     6    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     7    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     8    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     9    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    10    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    11    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    12    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    13    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    14    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    15    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    16    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    17    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    18    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    19    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    20    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    21    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    22    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    23    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    24    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    25    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    26    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    27    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    28    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    29    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    30    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    31    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    32    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    33    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    34    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    35    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    36    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    37    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    38    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    39    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    40    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    41    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    42    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    43    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    44    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    45    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    46    |                |               |      |  |
+----------+----------------+---------------+------+--+
| coloque   "lx" para lixo                  |      |  |
+---------------------------+---------------+------+--+
| Programa 32   bits        |               |      |  |
+---------------------------+---------------+------+--+


Enderecos do 1 eletrodomestico
Endereco Nome: 60fde8
Endereco Potencia: 60fe00
Endereco Tempo ativo: 60fe08

Enderecos do 2 eletrodomestico
Endereco Nome: 60fe10
Endereco Potencia: 60fe28
Endereco Tempo ativo: 60fe30

Enderecos do 3 eletrodomestico
Endereco Nome: 60fe38
Endereco Potencia: 60fe50
Endereco Tempo ativo: 60fe58

Enderecos do 4 eletrodomestico
Endereco Nome: 60fe60
Endereco Potencia: 60fe78
Endereco Tempo ativo: 60fe80

Enderecos do 5 eletrodomestico
Endereco Nome: 60fe88
Endereco Potencia: 60fea0
Endereco Tempo ativo: 60fea8

*/