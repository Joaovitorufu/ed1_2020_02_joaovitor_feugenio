#include <stdio.h>

int main() {
  int i;
	char x = 'q', y;
	printf("<<Forca de uma letra so>>\n");
	for (i = 4; i >= 0; i--)
	{
		printf("Qual a letra? ");
		scanf(" %c", &y);
		if (x==y){
		  printf("ACERTOU!\n");
		  break;
		}
		else if (i > 1) printf("Errado! Voce tem mais %d chances\n", i);
		else if (i == 1) printf("Ultima chance!!!\n\n");
	}
	if (x != y){
	printf("Acabaram suas chances. A letra correta eh '%c'\n", x);
	
	}
  return 0;
}

/*

*/