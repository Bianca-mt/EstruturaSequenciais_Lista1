/*5) Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos,
calcule e imprima a média ponderada dessas notas.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração das variaveis
    float n1,p1,n2,p2;
    float media_ponderada;

    //entrada de dados
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f",&n1);
    printf("Digite o peso da primeira nota:\n");
    scanf("%f",&p1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f",&n2);
    printf("Digite o peso da segunda nota:\n");
    scanf("%f",&p2);

    //processamento e saída
    media_ponderada = (n1*p1+n2*p2) / (p1+p2);
    printf("A media ponderada do aluno eh:%.2f\n",media_ponderada);

}