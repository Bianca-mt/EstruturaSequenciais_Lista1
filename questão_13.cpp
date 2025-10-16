/*13) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaração de variaveis
    float salario;
    float salariofinal;

    //entrada de dados
    printf("digite o salario do funcionario:\n");
    scanf("%f", &salario);

    //processamento e saída
    salariofinal = salario * 1.25;
    printf("O novo salario do funcionario com 25 porcento de aumento eh: %.2f",salariofinal);
}