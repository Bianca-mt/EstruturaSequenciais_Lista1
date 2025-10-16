/*2) Faça um algoritmo que receba dois números reais,
calcule e imprima a subtração do primeiro número
pelo segundo.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de variaveis
    float n1, n2 ;
    float subtracao;

    //entrada de dados
    printf("Digite o primeiro numero:\n");
    scanf(" %f", &n1);
    printf("Digite o segundo numero:\n");
    scanf(" %f", &n2);

    //processamento e saída
    subtracao = n1 - n2 ;
    printf("A subtracao desse numeros e: %.2f\n" ,subtracao);

}