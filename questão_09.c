/*9) Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo.
*Calcule e imprima quantos salários mínimos ganha esse funcionário.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    //declaração das variaveiss
    float salariofunci;
    float salariomin;
    int qtdesalariomin;

    //entrada de dados
    printf("Digite o salario do funcionario:\n");
    scanf("%f", &salariofunci);
    printf("Digite o salario minimo:\n");
    scanf("%f", &salariomin);

    qtdesalariomin = salariofunci/salariomin;
    printf("o funcionario recebe: %.d salarios minimo",qtdesalariomin);

}