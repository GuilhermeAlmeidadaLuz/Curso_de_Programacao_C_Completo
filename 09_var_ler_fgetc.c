#include<stdio.h>
#include<stdlib.h>

/*
                Aula 9
            Lendo caracteres
            função fgetc();     file get
*/

int main() {
    // tipo nome:
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin);    // stdin = standard input => teclado

    printf("Caracter lido: %c\n", letra);

    return 0;
}