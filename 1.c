#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altura = 1.75, peso = 68.5;
    printf("Altura: %.2f metros, Peso: %.2f kg\n", altura, peso);

    system("pause");
    return 0;
}

