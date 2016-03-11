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

    // é local pois é visível apenas para a função teste
    // é automática pois a cada vez que chamamos ela é recriada e perde qualquer valor que tenha anteriormente

}

