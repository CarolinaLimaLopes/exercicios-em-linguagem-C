#include <stdio.h>

int main() {

    int numero, cifra;

    printf(" \n Digite um n�mero inteiro:");
    scanf(" \n %i", %numero);

    if (numero >= 0){
        do {
           cifra = numero % 10;
           printf("%i", cifra);
           numero /= 10;

        } while (numero != 0);
        printf("\n ");
    }
    else if(numero < 1){
        numero = numero * -1;

        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        } while (numero != 0);
    }
    return 0;

}
