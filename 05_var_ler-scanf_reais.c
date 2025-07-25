#include<stdio.h>
#include<stdlib.h>

/*
                Aula 5
        Lendo números reais

*/

int main() {

    // tipo nome:
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);
    
    printf("Valor lido: %.3f", numero);
    return 0;
}