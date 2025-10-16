//11) Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.

#include <stdio.h>

int main() {
    int area;
    int diagonal;

    printf("Digite a diagonal do quadrado para calcular a sua area:\n");
    scanf("%d",&diagonal);

    area = (diagonal * diagonal)/ 2;
    printf("A area do quadrado eh: %d\n",area);
}
