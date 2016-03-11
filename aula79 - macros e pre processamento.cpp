#include <stdio.h>

#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main(void){
	
	char x = 'A';
	
	if (E_MINUSCULO (x)) {
		printf("\n E uma letra minuscula.");  // mostra se x ='a' é minusculo ou não	
	} else {
		printf("\n Nao e uma letra minuscula.");	
	}
	
	printf("\n %i", MAIOR(100, 50)); // mostra qual o numero maior
	
	return 0;
	
}
