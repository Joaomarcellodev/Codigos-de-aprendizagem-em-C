#include <stdio.h>

/*

Tipos:

- Local (Declarada dentro da função);
- Parâmetro da função( Variáveis Locais de uma função);
- Global ( Declarada fora da função, incluindo o include main());

*/


// Função Global
void EscrevaValor();
int numero = 15;
int main(){

    printf("O numero é %d  \n",numero);
    EscrevaValor();
    return 0;

}


void EscrevaValor(){

    int dobro = numero * 2;
    printf("E o valor é %d \n",dobro);
}