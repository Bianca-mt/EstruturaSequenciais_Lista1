/*16) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
imprima:
• a idade dessa pessoa;
• essa idade convertida em semanas.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração das variaveis
    int anodenascimento, anoatual , idade , idadeemsemanas ;

    //entada de dados
    printf("Digite o ano em que nasceu:\n");
    scanf("%d", &anodenascimento);
    printf("Digite o ano atual:\n");
    scanf("%d", &anoatual);

    //processamaneto de dados
    idade = anoatual - anodenascimento;
    idadeemsemanas = idade * 52;    //esse 52 é a quantidade de semanas que tem em um ano

    //saída
    printf("Sua idade eh: %d anos\n", idade);
    printf("sua idade em semanas eh: %d semanas\n", idadeemsemanas);

}