#include <stdio.h>

int main() {
    // Mover o bispo 5 casas na diagona superior direita
    for (int i = 0; i < 5; i++) {
        printf("Cima\n"); // Imprime a direção cima
        printf("Direita\n"); // Imprime a direção direita
    }

    // Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Mover a rainha 8 casas para a esquerda
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n"); // Imprime a direção do movimento
    }

    return 0;
}
