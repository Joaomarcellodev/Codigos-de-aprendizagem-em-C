#include <stdio.h>

int main(){

    int num;
    char nome[100];

    printf("Digite a sua idade:  \n");
    scanf("%d",&num);

    printf("Digite o seu nome: \n");
    scanf("%s",nome);

    printf("A sua idade é %d e seu nome é %s. \n", num, nome);

    return 0;


}
