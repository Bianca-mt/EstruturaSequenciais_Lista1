/*19) Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total
existente.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaração das variaveis
    int largura, comprimento , area_total;

    //entrada de dados
    printf("Digite a largura do lote de terra:\n");
    scanf("%d", &largura);
    printf("Digite a comprimento do lote de terra:\n");
    scanf("%d", &comprimento);

    //processamento e saída
    area_total = largura * comprimento;
    printf("Area total do lote de terra eh: %d \n", area_total);
}