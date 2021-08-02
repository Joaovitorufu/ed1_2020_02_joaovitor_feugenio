#include <stdio.h>

int main() {
  char opcao = '0';
	double km, m;
	while (opcao != 'q')
	{
		printf("<< Conversor >>\n");
		printf("Digite uma opcao\n");
		printf("1 - para converter de km/h para m/s\n2 - para converter de m/s para hm/h\nq - para sair\n");
		scanf(" %c", &opcao);
		switch (opcao)
		{
			case '1':
				printf("Digite a velocidade (km/h): ");
				scanf("%lf", &km);
				printf("A velocidade em m/s eh %.2lf\n", km / 3.6);
				break;
			case '2':
				printf("Digite a velocidade (m/s): ");
				scanf("%lf", &m);
				printf("A velocidade em km/h eh %.0lf\n\n", m * 3.6);
				break;
			default:
				if (opcao != 'q') opcao = '0';
		}
	}
  return 0;
}
/*

*/