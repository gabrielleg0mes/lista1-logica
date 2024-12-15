#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double num1, num2, soma;
    printf("Digite dois números reais: ");
    scanf("%lf %lf", &num1, &num2);
    soma = num1 + num2;
    printf("A soma de %.2f e %.2f é %.2f\n", num1, num2, soma);

    system("pause");
    return 0;
}

