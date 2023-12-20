/*

O array é um elemento que armazena uma série de de elemntos de dados do mesmo tipo
O array se inicia do [0] até o ifinito;

*/

#include <stdio.h>

int main(){

    int i;
    float notas[4] = {7.0,8.0,3.5,6.5};

    for (i = 0; i < 4; i++)
    {
        printf("A nota %d = %4.2f \n", i + 1, notas[i]);
    }


    return 0;
    
}