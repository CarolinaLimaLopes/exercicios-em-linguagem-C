#include <stdio.h>

int main(void) {

    void teste(void);
    teste();


    return 0;
}


void teste(void) {

    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 5;

    printf(" \n Variavel Local Automatica e: %i", variavelLocalAutomatica);

    // � local pois � vis�vel apenas para a fun��o teste
    // � autom�tica pois a cada vez que chamamos ela � recriada e perde qualquer valor que tenha anteriormente

}

