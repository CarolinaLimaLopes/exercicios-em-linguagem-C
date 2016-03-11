#include <stdio.h>

int main() {

    int num1, num2;

    printf(" \n Digite 2 números interiros:");
    scanf("%i %i ", &num1, &num2);

    if (num2 == 0)
        printf(" \n Divisão por 0 não permitido.");
    else {
        if (num1 % num2 == 0)
            printf(" \n %i é divisíl por %i. ", num1, num2);
        else
            printf(" \n %i não é divisíl por %i.", num1, num2);
    }

    return 0;

}
