#include <stdio.h>
#include "arquivo.h"

int main(){

    printf("Usando cabeçalhos! \n");
    int x = 5;
    int quad = quadrado(x);
    int cub = cubo(x);

    printf("Quadrado de %d é : %d \n",x,quad);
    printf("Cubo de %d é: %d \n",x,cub);

    printf("Valor da constante PI é : %f \n",PI);

    return 0;

// gcc -o a Arquivo.c main.c 
// .a

}