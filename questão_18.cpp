/*18) Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
total deve ser apresentado no final da execução do programa.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de variaveis
    float quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3 , valortotal;

    //entrada de dados
    printf("Digite a quantidade do primeiro produtos:\n");
    scanf("%f", &quantidade1);
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor1);
    printf("Digite a quantidade do segundo produtos:\n");
    scanf("%f", &quantidade2);
    printf("Digite o valor do segundo produto:\n");
    scanf("%f", &valor2);
    printf("Digite a quantidade do terceiro produto:\n");
    scanf("%f", &quantidade3);
    printf("Digite o valor do terceiro produto:\n");
    scanf("%f", &valor3);

    //processamento de dados e saída
    valortotal = ((quantidade1 * valor1)+ (quantidade2 * valor2) + (quantidade3 * valor3));
    printf("O valor total eh: %.2f",valortotal);
}