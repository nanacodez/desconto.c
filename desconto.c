/* Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12% */

#include <stdio.h>
int main () {
    float produto, valor_desconto, desconto;
    printf("digite o valor do produto: \n");
    scanf("%f", &produto);

    desconto = produto * 12 / 100;
    valor_desconto = produto - desconto;

    printf("o valor do produto com desconto de 12 porcento sera: %.2f\n", valor_desconto);

    return 0;
}
