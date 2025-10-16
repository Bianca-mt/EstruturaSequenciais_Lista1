/*3) Faça um algoritmo que receba dois números inteiros,
calcule e imprima a divisão do primeiro número pelo segundo.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaração das variaveis
    int n1,n2 ;
    int div;

    //entrada dos dados
    printf("Insira um numero inteiro:\n");
    scanf("%d",&n1);
    printf("Insira o segundo numero inteiro:\n");
    scanf("%d",&n2);

    //processamento e saída
    div= n1/n2 ;
    printf("A divisao dos dois numeros eh : %d",div);
}