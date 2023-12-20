/*

Ponteiro: É uma variavél especial, que armazena memória
          Variavél que aponta para outra variavél.
*/

#include <stdio.h>

int main(){

    int *x,valor,y;  
    valor = 35;     
    x = &valor;      //Atribuindo o endereço de valor a x;
    y = *x;         // Atribuindo o conteudo da variavel apontada por x a y;

    printf("Endereço da variavél comum valor: %p \n",&valor);
    printf("Lendo o conteúdo do ponteiro x: %p \n",x);
    printf("Endereço da variável ponteiro: %p \n",&x);
    printf("Conteudo da variavel apontada por x: %d\n",*x);
    printf("Conteudo da variavel comum y : %d\n",y);

// %p (Permite ser mostrado o endereço de memória na tela);

return 0;

}