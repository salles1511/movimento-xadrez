#include <stdio.h>

// Função recursiva para movimentar a Torre (para a direita)
void moverTorre(int passo, int limite) {
    if (passo > limite) return;
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, limite);
}

// Função recursiva para movimentar a Rainha (para a esquerda)
void moverRainha(int passo, int limite) {
    if (passo > limite) return;
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, limite);
}

// Função recursiva para movimentar o Bispo (diagonal superior direita)
void moverBispoRecursivo(int passo, int limite) {
    if (passo > limite) return;
    printf("Cima Direita (%d)\n", passo);
    moverBispoRecursivo(passo + 1, limite);
}

int main() {
    // Movimento da Torre (Direita) com recursão
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);

    // Movimento do Bispo com recursão + loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(1, 3);  // Movimento recursivo

    // Simulação extra com loops aninhados (vertical e horizontal)
    int vertical, horizontal;
    for (vertical = 1; vertical <= 2; vertical++) {
        for (horizontal = 1; horizontal <= 2; horizontal++) {
            printf("Diagonal (Cima Direita) [%d,%d]\n", vertical, horizontal);
        }
    }

    // Movimento da Rainha (Esquerda) com recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8);

    // Movimento do Cavalo (2 para cima, 1 para a direita)
    printf("\nMovimento do Cavalo:\n");

    int max_linhas = 2;   // movimentos para cima
    int max_colunas = 1;  // movimento para a direita

    for (int cima = 2; cima >= 1; cima--) {
        if (cima == 1) {
            int direita = 1;
            while (direita <= max_colunas) {
                printf("Direita (%d)\n", direita);
                direita++;

                // Usando 'continue' para pular condição falsa (exemplo didático)
                if (direita > 1) continue;
            }
        }

        if (cima == 2) {
            printf("Cima (%d)\n", cima);
        } else {
            printf("Cima (%d)\n", cima);
        }

        // Exemplo com 'break' apenas ilustrativo
        if (cima < 1) {
            break;
        }
    }

    return 0;
}
