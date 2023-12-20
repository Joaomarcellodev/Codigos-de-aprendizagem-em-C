#include <stdio.h>
#define TAM 10

int main() {

    int numeros[TAM];
    int i, aux, contador;

    printf("Entre com dez numeros para preencher o array, e pressione enter após digitar cada um: \n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("A ordem atual dos itens no array: \n");

    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    // Algoritmo da ordenação Bubblesort;

    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - contador; i++) {
            // Comparação e troca dos elementos, se necessário
            if (numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }

    printf("\n\nArray ordenado usando Bubblesort: \n");

    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    return 0;
}





