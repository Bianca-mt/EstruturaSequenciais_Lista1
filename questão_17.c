/*17) Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e
os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
um após o outro, o outro nome (o segundo) será impresso na segunda linha.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração de variaveis
    char nome1[10], nome2[10], nome3[10];

    //entrada de dados
    printf("Insira o primeiro nome:\n ");
    scanf("%s", &nome1);
    printf("Insira o segundo nome:\n ");
    scanf("%s", &nome2);
    printf("Insira o terceiro nome:\n ");
    scanf("%s", &nome3);

    //saída
    printf("%s %s\n",nome1 ,nome3);
    printf("%s",nome2);
}