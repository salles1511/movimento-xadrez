#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // Movimento do Bispo: 5 casas na diagonal superior direita
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= 8);

    // Movimento do Cavalo (for + while aninhado)
    printf("\nMovimento do Cavalo:\n");

    int passos_baixo = 2;
    int passos_esquerda = 1;

    for (i = 1; i <= passos_baixo; i++) {
        printf("Baixo\n");

        int contador = 1;
        while (contador <= passos_esquerda && i == passos_baixo) {
            printf("Esquerda\n");
            contador++;
        }
    }


    
    return 0;
}
