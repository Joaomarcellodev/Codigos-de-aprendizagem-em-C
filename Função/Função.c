#include <stdio.h>

void EscrevaNome();
int main(){

    EscrevaNome();
    return 0;
}

/*
Funções:

- Internas : São colocadas fora do main e depois chamadas , um exemplo o void.
- Externas : São colocadas dentro do main, um exemplo o printf.
- Vazias   : São chamadas na função main e e não não retorna números.

*/

void EscrevaNome(){
    printf("Bem-vindo ao J2 tech! \n");

}