#include <stdio.h>

int main() {
   
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

  
    //  (FOR)
 
    printf("Movimento da TORRE (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

   
    //  (WHILE)

    printf("\nMovimento do BISPO (5 casas na diagonal para cima e à direita):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

   
    // (DO-WHILE)

    printf("\nMovimento da RAINHA (8 casas para a esquerda):\n");
    int contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);


    //CAVALO
    printf("\nMovimento do CAVALO (2 casas para baixo e 1 para a esquerda):\n");

    // Loop externo com FOR:
    for (int l = 0; l < 1; l++) {
        int contar = 0;

        // Loop interno com WHILE
        while (contar < casasBaixo) {
            printf("Baixo\n");
            contar++;
        }
        printf("Esquerda\n");
    }

    return 0;
}