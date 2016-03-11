#include <stdio.h>

int main(void) {

   int matriz[3][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};

                       //ou = {1,2,3,4,5,6,7,8,9};
    printf("\n %i", matriz[1][0]);

                            // da mesma forma que o vetor...
                            // a posição na segunda linha e primeira coluna na verdade é...
                            // a linha zero e coluna 1

    return 0;
}
