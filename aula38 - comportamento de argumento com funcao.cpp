#include <stdio.h>

int main(void) {

	void funcaoPrint(int x, int vetor[]);
	int x = 10;
	int vetor[3] = {10};
	
	funcaoPrint(x, vetor);
	
	printf("\n Variavel int na funcao principal = %i ", x);
	printf("\n Vetor na funcao principal = %i ", vetor[1]);
	
    return 0;
}


void funcaoPrint(int x, int vetor[]) {
	
	x += 20;
	vetor[1] = 20;
	
	printf(" \n Variavel int na funcao print = %i ", x);
	printf(" \n Vetor na funcao print = %i ", vetor[1]);
	
	printf("\n");
	printf("\n");

}
