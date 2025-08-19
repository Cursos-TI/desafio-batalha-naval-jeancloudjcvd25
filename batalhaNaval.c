#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    char linha[] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {0};  // inicializa tudo com 0

    printf("\n...JOGO DE BATALHA NAVAL...\n\n");

    // Imprime cabeçalho com letras
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Imprime as linhas com números
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // numeração das linhas (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" 0 "); // símbolo do mar
        }
        printf("\n");
    }
    return 0;
}
