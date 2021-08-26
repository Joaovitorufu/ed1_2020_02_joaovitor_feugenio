#include <stdio.h>
#include "ex1.h"

int alteraSaldo(conta *psaldo, float valor){
    psaldo -> saldo = valor;
    return 1;
}
