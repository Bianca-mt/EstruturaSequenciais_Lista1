/*1) Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.*/

#include <stdio.h>

int main (){
    int n1, n2 ;

    printf("Digite o primeiro numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro:\n");
    scanf("%d", &n2);

    printf("A soma desses dois numeros eh: %d", n1 + n2);
}