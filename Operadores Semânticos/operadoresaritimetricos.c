// Operadores arítimetricos

#include <stdio.h>

int main(){

    int num1,num2,num3,num4,soma,sub,div;
    float F;

    F = 7.0 / 2.0;

    printf("Digite o primeiro numero:  \n");
    scanf("%d",&num1);

    printf("Digite o segundo numero:  \n");
    scanf("%d",&num2);

    soma = num1 + num2;

    printf("A soma de %d + %d é %d \n", num1,num2,soma);

    printf("Digite o terceiro numero :  \n");
    scanf("%d",&num3);

    printf("digite o quarto numero:  \n");
    scanf("%d",&num4);

    sub = num3 - num4;

    printf("A subtração de %d com %d é %d \n",num3,num4,sub);

    printf("A divisão de F é %.2f  \n",F);

    return 0;


}