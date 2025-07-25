#include <stdio.h>
#include <stdlib.h>

// Caractere de Escape para saltar uma linha -> \n

int main(){
    // printf é uma função de saída
    printf("\n----------------------------------------------\n\n");
    printf("1 - Logar       2 - Cadastrar     3 - Imprimir\n");
    printf("\n----------------------------------------------\n");

    printf("\nValor retornado: %d\n", printf("Bom"));
    
    // system("pause"); // Pausa a execução do programa até que o usuário pressione uma tecla
    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar(); // Espera por uma entrada do usuário antes de finalizar
    return 0;
}