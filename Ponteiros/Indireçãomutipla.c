/*


*/

#include <stdio.h>

int main(){

int a = 40;
int * pont1;
int ** pont2;
pont1 = &a;
pont2 = &pont1;

printf("O endereço da variavel é: %p \n",&a);
printf("O endereço do ponteiro pont1 é:%p \n",&pont1);
printf("O endereço do ponteiro pont2 é:%p \n", &pont2);
printf("O endereço apontado por pont1 é:%p \n",pont1);
printf("O endereço apontado por pront2 é:%p \n",pont2);
printf("E o valor armazenado em a é:%d \n",**pont2);

return 0;

    
}