#include <stdio.h>

int main(){

    // Um progama que peça ao usuário que insira 4 notas, onde será calculada a média e seja exposto

    int cont;
    float nota,media,total;
    total = 0;

    for (cont = 1; cont <= 4; cont++)
    {
        printf("Digite a nota: \n");
        scanf("%f", &nota);
        total= total+ nota;
    }

    media = total / 4;
    printf("Nota média é : %.2f \n",media);
    return 0;
    
}