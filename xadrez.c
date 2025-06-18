#include <stdio.h>

// === Função Recursiva para Torre ===
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1);
}

// === Função Recursiva para Bispo ===
void moverBispoRecursivo(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Cima Direita\n", atual);
    moverBispoRecursivo(casas, atual + 1);
}

// === Função Recursiva para Rainha ===
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1);
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // === TORRE ===
    printf("=== Movimento da Torre (Recursivo) ===\n");
    moverTorre(casasTorre, 1);

    // === BISPO - Recursivo ===
    printf("\n=== Movimento do Bispo (Recursivo) ===\n");
    moverBispoRecursivo(casasBispo, 1);

    // === BISPO - Loops Aninhados ===
    printf("\n=== Movimento do Bispo (Loops Aninhados) ===\n");
    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {  // Uma diagonal por linha
            printf("Casa %d: Cima Direita\n", linha);
        }
    }

    // === RAINHA ===
    printf("\n=== Movimento da Rainha (Recursivo) ===\n");
    moverRainha(casasRainha, 1);

    // === CAVALO ===
    printf("\n=== Movimento do Cavalo (Loops Aninhados Complexos) ===\n");
    int passosCima = 0;
    int passosDireita = 0;

    for (int i = 1; i <= 2; i++) { // duas casas para cima
        passosCima++;
        if (i == 2) {
            for (int j = 1; j <= 1; j++) { // uma casa para direita
                passosDireita++;
                if (passosDireita > 1) break;
                printf("Passo %d: Direita\n", passosCima + passosDireita);
            }
        }
        if (i == 1) continue;
        printf("Passo %d: Cima\n", passosCima);
    }

    return 0;
}

