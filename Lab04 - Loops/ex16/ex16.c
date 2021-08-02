#include <stdio.h>
#include <math.h>

int main() {
  int i;
	double num;
	for (i = 2; i <= 128; i*= 2)
	{
		num = pow(2, i);
		if (i <= 32) printf("Com %d bits eh possivel enderecar %.0f posicoes de memoria\n", i, num);
		else printf("Com %d bits eh possivel enderecar %.14e posicoes de memoria\n", i, num);
	}
  return 0;
}

/*

*/