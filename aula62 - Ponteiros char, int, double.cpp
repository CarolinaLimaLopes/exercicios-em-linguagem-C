#include <stdio.h>

int main(void){
	

	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	
	printf("\n Endere�o X = %i - Valor x = %i ", pX , *pX);
	printf("\n Endere�o Y = %i - Valor y = %f ", pY , *pY);
	printf("\n Endere�o Z = %i - Valor z = %c ", pZ , *pZ);
	getchar();
	
	return 0;
}
