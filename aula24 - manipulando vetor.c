#include <stdio.h>

int main(void) {

    float notas[5] = {0};
    float soma = 0;
    float media = 0;

    printf("\n Insira 5 notas:");

    for (int i = 0; i < 5; ++i)
        scanf("%f", &notas[i]);

    for (int i = 0; i < 5; ++i)
        soma += notas[1];

    media = soma / 5;

    printf("\n  A média do aluno é %f :", media);


    return 0;
}
