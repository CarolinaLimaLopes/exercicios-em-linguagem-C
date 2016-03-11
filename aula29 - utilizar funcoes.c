#include <stdio.h>

int main(void) {

    float calcularAreaRetangulo(float base, float altura);
    float area = calcularAreaRetangulo(10.0 , 20.0);

    printf(" \n A área é: %f ", area);

    return 0;
}


float calcularAreaRetangulo(float base, float altura) {

    float area = base * altura;

    return area; // tem que retornar tipo float
}

