/*12 Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.*/

#include <stdio.h>

int main() {

    //declaração das variáveis
    float salariofuncionario;
    float imposto_renda;

    //entrada de dados
    printf("Digite o salario do funcionario:\n ");
    scanf("%f", &salariofuncionario);

    //processamento e saída
    imposto_renda = salariofuncionario * 0.05;
    printf("O valor do imposto de renda que o funcionario ira pagar eh:%.2f",imposto_renda);

}