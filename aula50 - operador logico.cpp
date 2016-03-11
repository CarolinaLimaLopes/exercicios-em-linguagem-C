#include <stdio.h>

int main(void) {

	int idade;
	
	printf("\n Digite sua idade: ");
	scanf("%i", &idade);
	
	if(idade >= 20 && idade <= 40) {
		printf("\n Deu certo");
	}
	else if(idade == 10 || idade == 50){
		printf("\n Deu mais ou menos certo");
	}
	else {
		printf("\n Deu errado");
	}
    return 0;
}


