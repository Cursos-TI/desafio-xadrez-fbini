#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE (5 casas para a direita):\n");

    // for
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do BISPO (5 casas na diagonal para cima e a direita):\n");

    // while 
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da RAINHA (8 casas para a esquerda):\n");

    // do-while
    int conta = 1;
    do {
        printf("Esquerda\n");
        conta++;
    } while (conta <= casasRainha);

    return 0;
}