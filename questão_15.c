/*15) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
• o peso dessa pessoa em gramas;
• se essa pessoa engordar 5%, qual será seu novo peso em gramas.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    //declaração das variaveis
    int peso, pesoemgrama , pesoaumentado;

    //enttrada de dados
    printf("Digite seu peso :\n ");
    scanf("%d", &peso);

    //processamento e saída
    pesoemgrama = peso * 1000;
    pesoaumentado = pesoemgrama * 1.05;
    printf("seu peso em gramas eh : %d gramas \n", pesoemgrama);
    printf("se caso voce engordar 5 porcento,sera: %d",pesoaumentado);/*antes fiz sem essa variavel de
                                                            peso aumentado , mas por algum motivo no meu terminal
                                                            tava saindo 0 , não sei porque já que saão tudo numeros
                                                            inteiros*/
}