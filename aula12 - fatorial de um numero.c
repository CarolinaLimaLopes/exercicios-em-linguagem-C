#include <stdio.h>

int main()
{
    int fatorial;
    int resposta = 1;
    printf("\n Qual o número fatorial?", fatorial);
    scanf("%i", &fatorial);

    for ( ; fatorial >= 1; --fatorial)
    {
        resposta = resposta * fatorial;
    }

    printf("O número fatorial é %i \n", resposta);

    return 0;
}
