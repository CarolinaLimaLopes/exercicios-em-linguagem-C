#include <stdio.h>

int main(void) {
    int vetor[5] = {10};  // o primeiro assumo o valor de 10 e os demais 0
    int vetor[5] = {10, 3};  // o primeiro assumo o valor de 10 , o segundo assume 3 e os demais 0


    for (int i = 0; i < 5; ++i) {
        printf("\n %i ", vetor[1]);
    }
}
