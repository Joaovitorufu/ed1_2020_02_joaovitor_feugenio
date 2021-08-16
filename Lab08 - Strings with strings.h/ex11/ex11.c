#include <stdio.h>
#include <string.h>
int main(void)
{
    char buff[5];
    int pass = 0;
    printf("\n Entre com a senha : \n");
    gets(buff);
    if (strcmp(buff, "1234"))
    {
        printf("\n Senha Errada \n");
    }
    else
    {
        printf("\n Senha Correta \n");
        pass = 1;
    }
    if (pass)
    { /* O usuário acertou a senha, poderá continuar*/
        printf("\n Acesso liberado \n");
    }
    else
    {
        printf("\n Acesso negado \n");
    }
    return 0;
}
    /*
    11 a) a função do programa é negar ou não o acesso dependendo de uma senha digitada.
    11 b) Senha Correta acesso liberado
    11 c)
    a.Senha errada acesso negado
    b.Senha errada Acesso negado
    c.Senha errada Acesso liberado
    11 d) o programa obtem um comportamento invalido no caso C, pois ele invade a memmoria que foi alocada à ele.

*/
