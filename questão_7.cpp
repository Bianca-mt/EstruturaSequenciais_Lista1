/*7) Faça um algoritmo que receba dois números,
*, calcule e imprima um elevado ao outro.*/

#include <stdio.h>
#include <math.h> /*biblioteca para usar a função 'pow' onde faço a potenciação*/

int main() {
    int n1,n2; //declaração das variaveis
    int elevado;

    //entrada dos dados
    printf("digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("digite o segundo numero:\n");
    scanf("%d",&n2);

    //processamento e saída
    elevado = pow(n1, n2);
    printf("A elevacao do primeiro numero pelo segundo eh:%d\n",elevado);


