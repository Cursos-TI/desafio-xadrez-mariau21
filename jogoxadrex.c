#include <stdio.h>

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (Diagonais), com loops aninhados
void moverBispoRecursivo(int linha, int max) {
    if (linha > max) return;
    
    // Loop aninhado para simular parte horizontal da diagonal
    for (int coluna = 1; coluna <= 1; coluna++) {
        printf("Cima Direita\n");
    }

    moverBispoRecursivo(linha + 1, max);
}

// Movimento do Cavalo (duas para cima, uma para a direita) com loops aninhados e controle com break/continue
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 0;

    for (int i = 2; i >= 1; i--) {
        if (i == 0) break;

        int j = 0;
        while (j < 2) {
            if (i == 1 && j == 1) {
                printf("Direita\n");
                break;
            }

            if (i >= 1) {
                printf("Cima\n");
                movimentos++;
            }

            j++;

            if (movimentos >= 2) {
                continue;
            }
        }
    }
}

// Função principal
int main() {
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispo = 5;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(1, casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops complexos
    moverCavalo();

    return 0;
}
