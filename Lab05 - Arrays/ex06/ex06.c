#include <stdio.h>

int main(){
    printf("<< Five Values with index >>\n");
     int vet[5],i,maior=0,menor=0,aux1=0,aux2=0;
     float media=0;
    for(i=0;i<5;i++){
        printf("Entre com o numero %d: ",i+1);
        scanf("%d",&vet[i]);
        if(vet[i] >= maior){
          maior = vet[i];
          aux1=i;  
        } 
        if(vet[i] <= menor){
            menor = vet[i];
            aux2=i;
        } 
        media = media + vet[i];
    }
    printf("Os numeros digitados sao: ");
    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
    printf("\nO maior valor eh: %d localizado na posicao %d do vetor", maior,aux1);
    printf("\nO menor valor eh: %d localizado na posicao %d do vetor", menor,aux2);
    printf("\na media eh: %.1f", media/5);

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/