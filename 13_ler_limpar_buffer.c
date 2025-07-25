#include <stdio.h>
#include <stdlib.h>

/*
                Aula 13 - Como ler 2 caracteres e limpar o buffer do teclado com um espaço?
            Ler dois caracteres
*/

int main()
{
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); // espaço desconsidera ENTER, TAB e ESPAÇO se houver entre os caracteres

    // antes de ir para as váriaveis, vai para a região do buffer do teclado
    // %c%c
    // buffer do teclado -> f\n

    // %c %c
    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // buffer do teclado => f\n

    // fflush(); para limpeza do buffer só funciona no Windows e nem em todos os casos.

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}