#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float horasTrabalhadas, valorHora, salario;
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);
    salario = horasTrabalhadas * valorHora;
    printf("O salário total do funcionário é R$ %.2f\n", salario);

    system("pause");
    return 0;
}

