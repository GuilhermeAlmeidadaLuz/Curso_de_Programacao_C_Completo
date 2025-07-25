#include <stdio.h>
#include <stdlib.h>

/*
                Aula 12 - Problema ao ler caracter com a linguagem C
            Lendo sexo, idade, peso e altura
*/

int main()
{

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura, sexo (f, F, m ou M):\n");
    scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);

    // buffer do teclado -> 45\n56.2\n1.63\n
    //                      idade = 45; peso = 56.2; altura = 1.63; sexo = \n;
    //                      sexo é \n ou enter/quebra de linha, que é o caracter para quebra de linha
    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

    printf("\n=======================\nPara contornar esse erro:\n======================\n");
    // Para contornar esse erro (usar espaço se quer que o compilador do C desconsidere os caracteres de escape como: espaço, quebra de linha, tabulação)

    // sexo = ' ';
    // idade = 0;
    // peso, altura = 0.0;

    printf("\nDigite idade, peso, altura, sexo (f, F, m ou M):\n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo); // buffer do teclado => 18\n70.4\n1.82\nM\n
    // o espaço desconsidera o caracter <\n> e o resultado será: idade = 18; peso = 70.4; altura = 1.82; sexo = M;

    // buffer => \n
    scanf("%c"); // lê o \n do buffer
    // caso seja scanf(" ");    será ignorado o \n do buffer (cancelado) e o cursor ficará aguardando a leitura de um outro caracter => scanf("cancelado|cursor|esperando_caracter")

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
    return 0;
}