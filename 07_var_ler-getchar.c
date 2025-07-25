#include<stdio.h>
#include<stdlib.h>

/*
                Aula 7
            Lendo caracteres
            função getchar()
*/

int main() {
    // tipo nome:
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Caracter lido aqui: %c\n", letra);

    return 0;
}