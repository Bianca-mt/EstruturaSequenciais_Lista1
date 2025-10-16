/*10) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango.*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592653589793     /*já que pi não tem em math tive que usar o define
                                    creio eu que eu só declarasse daria no mesmo , porém ,
                                  teoricamente ocuparia mais espaço da memória */
int main() {
    int area , base , altura , lado;
    int base_maior , base_menor , diagonal_maior , diagonal_menor;
    float raio;
    float area_circulo;

    //entrada de dados para calcular a area do >>> triangulo <<<
    printf("Digite a base do triangulo:\n");
    scanf("%d", &base);
    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);

    //o processamento e saida do calculo da area do triangulo
    area = (base * altura)/2;
    printf("A area do triangulo eh: %.d\n", area);

    //entrada de dados para calcular a area do >>>quadrado<<<
    printf("Digite os lados do quadrado:\n");
    scanf("%d", &lado);

    //processamento e saída do calculo da area do quadrado
    area = lado * lado;
    printf("A area do quadrado eh: %d\n", area);

    //entrada de dados para calcular a area do >>> circulo <<<
    printf("Digite o raio do circulo (distancia do centro a borda):\n ");
    scanf("%f", &raio);

    //processamento e saida do calculo da area do circulo
    area_circulo = (raio * raio)* PI;
    printf("Area do circulo eh: %.1f\n", area_circulo);

    //entrada de dados para calcular a area de >>> trapézio <<<
    printf("Digite a base maior do trapezio:\n");
    scanf("%d", &base_maior);
    printf("Digite a base menor do trapezio:\n");
    scanf("%d", &base_menor);
    printf("Digite a altura do trapezio:\n");
    scanf("%d",&altura);

    //processamento e saida do calculo da area do trapezio
    area = ((base_maior + base_menor) * altura) / 2;
    printf("A area do trapezio eh: %d\n", area);

    //entrada de dados para calcular a area do >>> retangulo <<<
    printf("Digite a base do retangulo:\n");
    scanf("%d", &base);
    printf("Digite a altura do retangulo:\n");
    scanf("%d", &altura);

    //processamento e saída do calculo da area do retangulo
    area = base * altura;
    printf("A area do retangulo eh: %d\n", area);

    //entrada de dados para calculo da area de >>> losango <<<
    printf("Digite a diagonal maior do losango:\n");
    scanf("%d", &diagonal_maior);
    printf("Digite a diagonal menor do losango:\n");
    scanf("%d", &diagonal_menor);

    //processamento e saída do calculo da area do losango
    area= (diagonal_maior * diagonal_menor) /2;
    printf("A area do losango eh: %d\n", area);

}