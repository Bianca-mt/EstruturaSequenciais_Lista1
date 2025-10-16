/*20) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração das variaveis
    int valor1, valor2 , valor3 , valor4 , soma , resto1 , resto2 , resto3 , resto4;
    float media;

    //entrada dos dados
    printf("Digite o primeiro valor:\n ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor:\n ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor:\n ");
    scanf("%d", &valor3);
    printf("Digite o quarto valor:\n ");
    scanf("%d", &valor4);

    //processamento
    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4.0;
    resto1 = soma % valor1 ;
    resto2 = soma % valor2 ;
    resto3 = soma % valor3 ;
    resto4 = soma % valor4;

    //saída
    printf("A media desses numeros sao: %.2f\n", media);
    printf("O somatorio desses numeros sao: %d\n" , soma);
    printf("A resto desses numeros sao: %d %d %d %d", resto1 ,resto2 , resto3 , resto4);
}