#include <stdio.h>

int main(void) {

    void teste(void);
    teste();
    teste();
    teste();


    return 0;
}


void teste(void) {

    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 5;

    static int variavelLocalEstatica = 3;
    variavelLocalEstatica *= 4;

    printf(" \n Variavel Local Automatica e: %i", variavelLocalAutomatica);
    printf(" \n Variavel Local Estatica e: %i", variavelLocalEstatica);

    // a diferen�a � que a ESTATICA n�o perde o valor quando � chamada

}

