#include <stdio.h>

// variavel global

int gVariavelGlobal = 2;


int main(void) {

    void teste(void);

    printf("\n Variavel Global = %i ", gVariavelGlobal);
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

    gVariavelGlobal *= 10;

    printf(" \n Variavel Local Automatica e: %i", variavelLocalAutomatica);
    printf(" \n Variavel Local Estatica e: %i", variavelLocalEstatica);

    // a diferença é que a ESTATICA não perde o valor quando é chamada

    printf("\n Variavel Global = %i ", gVariavelGlobal);

    // variavel global se comporta como um variavel estatica (não se recria)/
}

