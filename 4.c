#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;
    printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é %.2f\n", area);

    system("pause");
    return 0;
}

