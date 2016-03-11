#include <stdio.h>

int main(void) {

	const int bimestreAnuais = 4;
	const int numeroAlunos = 4;

	float notasAlunos[numeroAlunos][bimestreAnuais] = {0};
	float mediasAlunos[numeroAlunos] = {0};

    float  media = 0;

    printf("\n Insira as 4 notas do aluno 1: ");
    for (int aluno = 0; aluno < numeroAlunos; ++aluno) {
        for (int notas = 0; notas < bimestreAnuais; ++ notas) {
            scanf("%f ", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestreAnuais;
        media = 0;
        printf("\n Insira as 4 notas do aluno %i:", aluno + 2);
    }
    for (int aluno = 0; aluno < numeroAlunos; ++aluno) {
        printf("\n A média do aluno %i é %.2f: ", aluno + 1, mediasAlunos[aluno]);
    }


    return 0;
}
