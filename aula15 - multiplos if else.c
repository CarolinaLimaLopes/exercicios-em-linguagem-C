#include <stdio.h>

int main()
{
    int idade;
    printf("Informar idade: \n");
    scanf("%i", &idade);

    if (idade <= 5)
        printf("bebê \n");
    else if (idade > 5 && idade <=10)
        printf("criança \n");
    else if (idade > 10 && idade <= 18)
        printf("jovem \n");
    else if (idade > 18 && idade <= 50)
        printf("adulto \n");
    else
        printf("idoso \n");


    return 0;
}
