#include <stdio.h>
#include <math.h>

int main() {
  printf("<< Conversor binario-decimal >>\n");
  int i,bits, aux, bit, bi = 0, dec = 0;
	printf("Entre com o número de bits: ");
	scanf("%d", &bits);
	aux = bits - 1;
	for (i = 1; i <= bits; i++, aux--)
	{
		printf("Digite o bit # %d: ", i);
		scanf("%d", &bit);
		dec += bit * pow(2, aux);
		bi += (bit * pow(10, aux));
	}
	printf("O numero binario %d em decimal eh %d\n", bi, dec);
  return 0;
}

/*

*/