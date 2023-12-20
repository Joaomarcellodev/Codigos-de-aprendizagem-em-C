#include <stdio.h>

int main() {
    int cont;
    char cod;
    float nota,media, total;
    total = 0;
    cod = 'C';

    while (cod != 'F') {
        for (cont = 1; cont <= 4; cont++) {
            printf("Digite a nota: \n");
            scanf("%f", &nota);
            total = total + nota;
        }

        media = total / 4;
        printf("nota media: %.2f \n\n", media);
        total = 0;
        nota = 0;
        
        printf("Deseja calcular a media de mais algum aluno? Pressione qualquer tecla para prosseguir ou pressione F para encerrar\n");
        cod = getchar();
    }

    return 0;
}


