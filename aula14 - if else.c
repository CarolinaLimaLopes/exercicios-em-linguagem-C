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
//S� uso as chaves se tiver mais de uma instru��o
    return 0;
}
