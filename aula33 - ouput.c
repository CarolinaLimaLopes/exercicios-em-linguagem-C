#include <stdio.h>

int main(void) {

    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;

    // Formatacao variaveis inteiras:
    printf(" \n Variavel inteira (%%d) = %d", intVar);
    printf(" \n Variavel inteira (%%i) = %7i", intVar2); // se colocar %6i ele vai 6 casas para direita
                                                         // se colocar %.2i ele vai duas casas para direita e acrescenta zero antes
    printf(" \n Variavel inteira (%%x) = %x", intVar2); // converte para hexa
    printf(" \n Variavel inteira (%%o) = %o", intVar);  // converte para octal
    printf(" \n ");

    // Formatcao variaveis float e double:
    printf(" \n Variavel double (%%f) = %f", doubleVar); // precisao de 6 casas após da virgula
    printf(" \n Variavel double (%%e) = %e", doubleVar); // numero em notacao científica
    printf(" \n Variavel double (%%g) = %g", doubleVar); // precisão de 3 casas depois da virgula
    printf(" \n Variavel double (%%a) = %a", doubleVar); // numero em notacao cientifica usando virgula
    printf(" \n ");

    system("pause");
    return 0;

}

