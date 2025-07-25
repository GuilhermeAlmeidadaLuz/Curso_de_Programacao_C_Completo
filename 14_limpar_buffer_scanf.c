#include <stdio.h>
#include <stdlib.h>

/*
                Aula 14 - Como limpar o buffer do teclado com a função scanf()?

*/

int main()
{
    char a, b;

    printf("Digite uma letra: ");
    // buffer => letra1\n
    scanf("%c", &a);

    // buffer => \n

    printf("Digite uma letra: ");
    // buffer => \nletra2\n
    scanf(" %c", &b);

    // buffer => \n

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    // --------------------------------
    // outra forma:
    printf("\n");
    // a = ' ';
    // b = ' ';

    // buffer => \n

    printf("Digite uma letra: ");
    // buffer => \n
    // buffer => \nletra3\n

    scanf(" "); // tira-canecela-ignora um \n

    // buffer => letra3\n
    scanf("%c", &a); // atribui letra3 para variável

    // buffer -> \n

    printf("Digite uma letra: ");
    // buffer => \n
    // buffer => \nletra4\n

    scanf(" "); // tira um \n
    
    // buffer => letra4\n
    scanf("%c", &b); // atribui letra4 para variável

    // buffer => \n     // se não houver \n no buffer do teclado, programa encerra antes de imprimir
    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}