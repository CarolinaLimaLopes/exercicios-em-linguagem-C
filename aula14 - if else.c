#include <stdio.h>

int main()
{
    int idade;

    printf("Favor informar a idade: \n");
    scanf("%i", &idade);

    if (idade < 18)
    {
        printf("Menor de Idade \n");
    }
    else
        printf("Maior de Idade \n");
//Só uso as chaves se tiver mais de uma instrução
    return 0;
}
