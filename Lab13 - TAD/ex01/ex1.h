//definição da estrutura
typedef struct conta conta;
 struct conta
{
    int numConta;
    float saldo;
    char nome[100];
};

//funções aqui

int alteraSaldo(conta *psaldo, float valor);


