/*8) Faça um programa que receba um número inteiro, calcule e imprima:
• a raiz quadrada desse número;
• esse número elevado ao quadrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //vou usar a função sqrt() apenas para a raiz quadrada

int main() {
    //declaração de variaveis
    int n;
    int raiz_quadrada;
    int elevado_quadrado;

    //entrada de dados
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    //processamento e saída
    elevado_quadrado = n * n;
    printf("o numero elevado ao quadrado eh:%d\n",elevado_quadrado);

    raiz_quadrada = sqrt(n);
    printf("A raiz quadrada eh:%d\n",raiz_quadrada);
}
