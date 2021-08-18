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
	double conTotal = 0, conRelativo[5] = {0};
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
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

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
-------------------------------------------------------------------------------
*/