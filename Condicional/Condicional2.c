#include <stdio.h>

// Coloca-se uma condição intermediária no código, no caso o elseif

int main(){

    int num1,num2,num3,media;

    printf("Insira a primeira nota:  \n");
    scanf("%d",&num1);

    printf("Insira a segunda nota:  \n");
    scanf("%d",&num2);

    printf("Insira a terceira nota:  \n");
    scanf("%d",&num3);
    
    media = ( num1 + num2 + num3) / 3;

     /*

     If significa "se"
     Else significa "senão"
     Else if significa "senão se"
     
     */

    if (media >= 7)
    {
        printf("O aluno está aprovado !  \n");
    }
    else if ( media >= 5)
    {
        printf("O aluno(a) está de recuperação !  \n");
    }
    else
    {    
        printf("O aluno está reprovado ! \n");
    }

    return 0;

}