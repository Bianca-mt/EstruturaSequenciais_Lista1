/*4) Faça um algoritmo que receba três notas de um aluno
calcule e imprima a média aritmética entre essas notas.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    //declaração das variaveis
    float n1, n2 , n3;
    float media;

    //a entrada dos dados
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &n3);

    //processamento e saída
    media = (n1 + n2 + n3) / 3;
    printf("A media dos aluno eh: %.2f", media);
}//