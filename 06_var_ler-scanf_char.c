#include<stdio.h>
#include<stdlib.h>

/*
                Aula 6
            Lendo caracteres

*/

int main() {
    // tipo nome:
    char sexo = 'k';

    printf("Valor da variavel sexo: %c\n", sexo);

    printf("Digite seu sexo: (f, F, m ou M) ");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);

    return 0;
}