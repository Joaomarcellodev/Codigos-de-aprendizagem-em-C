# include <stdio.h>

int main(){

    float salario;
    char nome [100];

    printf("Digite o seu nome:  \n");
    scanf("%s", nome);
    printf("Digite o valor do seu salario: \n");
    scanf("%f",&salario);

    printf("O seu nome é %s e seu salario e %.2f", nome, salario);

    return 0;


   // scanf(" %99[^\n]", nome);
}