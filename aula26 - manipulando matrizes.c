#include <stdio.h>

int main(void) {

	int m;
	int n;

   	int matriz[5][5] = {{01,02,03,04,05},
                       {06,07,08,09,10},
                       {11,12,13,14,15}
                       {16,17,18,19,20}
                       {21,22,23,24,25}};


    for (int m = 0; m < 5; ++m){
        for (int n = 0; n < 5; ++n) {
            printf("\n %i ", matriz[m][n]);
        }
        printf("\n");
    }



    return 0;
}
