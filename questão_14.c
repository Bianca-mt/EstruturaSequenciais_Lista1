/*14) Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
imprima:
• o valor, em reais, de cada kilowatt;
• o valor, em reais, a ser pago por essa residência;
• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.*/

#include <stdio.h>
#include <stdlib.h>  /*essa questão tive que perguntar pra ia se minha lógica estava correta
pois os valores saíram altos no terminal (foi o que estranhei),
porem a questão diz que o valor do kiliwatt é 1/5 do salario minimo (que é alto)
ou seja , não tem nada de errado com a minha lógica, fiz certin ihull*/

int main (){
    //declaração de variaveis
    float salariomin , qtdekilowatt , valorkilowatt , valoraserpago;

    //entrada de dados
    printf("Digite o salario minimo:\n");
    scanf("%f", &salariomin);
    printf("Digite a quantidade de kilowatt gasta na residencia :\n");
    scanf("%f", &qtdekilowatt);

    //processamento
    valorkilowatt = salariomin / 5;
    valoraserpago = qtdekilowatt * valorkilowatt;

    //saída
    printf("O valor do kilowatt de acordo com o salario minimo eh: %.2f\n",valorkilowatt);
    printf("O valor total a ser pago por essa residencia eh: %.2f\n",valoraserpago);
    printf("O valor a ser pago com desconto de 15 porcento eh: %.2f",valoraserpago * 0.85);
}