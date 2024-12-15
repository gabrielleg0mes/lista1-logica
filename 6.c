#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas é %.2f\n", media);

    system("pause");
    return 0;
}

