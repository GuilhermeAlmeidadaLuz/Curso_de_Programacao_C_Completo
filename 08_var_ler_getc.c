#include<stdio.h>
#include<stdlib.h>

/*
                Aula 8
            Lendo caracteres
            função getc();
*/

int main() {
    // tipo nome:
    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);    // stdin = standard input

    printf("Caracter lido: %c\n", letra);

    return 0;
}