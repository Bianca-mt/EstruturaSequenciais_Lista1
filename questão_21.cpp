/*21) Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaração das variaveis
    float largura , comprimento , profundidade , valordasconstru;

    printf("Digite  o comprimento da piscina : \n");
    scanf("%f",&comprimento);
    printf("Digite  o profundidade da piscina : \n");
    scanf("%f",&profundidade);
    printf("Digite a largura do piscina : \n");
    scanf("%f",&largura);

    //processamento e saída
    valordasconstru = comprimento * profundidade * largura;
    printf("O valor da construcao cobrado por m3 eh: %.2f ",valordasconstru * 45);
}