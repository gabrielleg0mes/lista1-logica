#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco, quantidade, total;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade comprada: ");
    scanf("%f", &quantidade);
    total = preco * quantidade;
    printf("O valor total a ser pago é R$ %.2f\n", total);

    system("pause");
    return 0;
}

