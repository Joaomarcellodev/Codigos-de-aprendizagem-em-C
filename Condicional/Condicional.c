#include <stdio.h>

int main(){

    int num1,num2,num3,media;

    printf("Insira a primeira nota: \n");
    scanf("%d",&num1);

    printf("Insira a segunda nota:  \n");
    scanf("%d",&num2);

    printf("Insira a terceira nota:  \n");
    scanf("%d",&num3);

    media = (num1 + num2 + num3) / 3;

    if (media >= 7)
    {
        printf("O aluno será aprovado \n");
    }
    else{
        printf("O aluno será reprovado  \n");
    }
    

    return 0;

}

