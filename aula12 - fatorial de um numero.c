#include <stdio.h>

int main()
{
    int fatorial;
    int resposta = 1;
    printf("\n Qual o n�mero fatorial?", fatorial);
    scanf("%i", &fatorial);

    for ( ; fatorial >= 1; --fatorial)
    {
        resposta = resposta * fatorial;
    }

    printf("O n�mero fatorial � %i \n", resposta);

    return 0;
}
