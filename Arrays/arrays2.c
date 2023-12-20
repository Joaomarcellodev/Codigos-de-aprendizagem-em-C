#include <stdio.h>

int main(){

    float notas[4];
    int i;

    // Lendo as notas dos alunos :

    for ( i = 0; i < 4; i++)
    {
        printf("Entre com as %d do aluno:  \n", i + 1);
        scanf("%f",&notas[i]);
    }
    
    // Mostrando na tela as notas armazenadas:

    for (i = 0; i < 4; i++)
    {
        printf("A nota %d : %4.2f \n", i+1, notas[i]);
    }
    
    return 0;

}