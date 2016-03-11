#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 10; ++1) {
        printf("\n **Volta %i", i);
        for (int j = 1; j <= 10; ++j) {
            printf("\n Ponto %i", j);
        }
        printf("\n");
    }

    return 0;

}
