#include <stdio.h>

int main() {

    int num1, num2;

    printf(" \n Digite 2 n�meros interiros:");
    scanf("%i %i ", &num1, &num2);

    if (num2 == 0)
        printf(" \n Divis�o por 0 n�o permitido.");
    else {
        if (num1 % num2 == 0)
            printf(" \n %i � divis�l por %i. ", num1, num2);
        else
            printf(" \n %i n�o � divis�l por %i.", num1, num2);
    }

    return 0;

}
