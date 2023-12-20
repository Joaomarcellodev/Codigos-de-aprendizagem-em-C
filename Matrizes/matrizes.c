#include <stdio.h>
#define NUM_L 5
#define NUM_C 4
// Matrizes;

#include <stdio.h>

#define NUM_L 5
#define NUM_C 4

int main() {
    int coluna, linha;
    float notas[NUM_L][NUM_C] = {{7.8, 8.6, 9.8, 7.9},
                                 {9.6, 3.2, 4.7, 9.8},
                                 {2.5, 5.8, 6.3, 8.0},
                                 {9.8, 4.9, 7.5, 9.9},
                                 {8.0, 7.1, 8.9, 6.9}};

    printf("Exibindo o conteudo da matriz declarada e inicializada: \n");

    for (linha = 0; linha < NUM_L; linha++) {
        for (coluna = 0; coluna < NUM_C; coluna++) {
            printf("%4.2f\t", notas[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n O valor do elemento na 2° linha, 3° coluna: %4.2f\n", notas[1][2]);

    return 0;
}
