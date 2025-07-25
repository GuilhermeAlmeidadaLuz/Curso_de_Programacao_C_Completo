#include<stdio.h>
#include<stdlib.h>

/*
                Aula 11
            Lendo sexo, idade, peso e altura
*/

int main() {

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite o sexo (m, M, f ou F): ");
    sexo = getchar();

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso em kg (ex: 78.9): ");
    scanf("%f", &peso);

    printf("Digite a altura em m (ex: 1.89): ");
    scanf("%f", &altura);

    printf("\nSexo: '%c' - Idade: '%d' - Peso: '%.2f' - Altura: '%.2f'\n", sexo, idade, peso, altura);
    // buffer => \n
    printf("\n=======================================\n");
    

    // outra forma:
    printf("\nDigite sexo (f, F, m ou M), idade, peso e altura:\n");
    scanf(" ");     // retira o \n do buffer do teclado, as explicações podem ser vistas na aula 12, 13 e 14
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}