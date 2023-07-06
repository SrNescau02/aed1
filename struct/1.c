#include <stdio.h>


int main(){

struct cadastro
{
    char nome[30];
    char endereco[100];
    int telefone;
};

struct cadastro pessoa[2];

for(int i=0; i<2; i++){
printf("Digite o nome da pessoa %i: ",i+1);
scanf("%s",pessoa[i].nome);

printf("Digite o endereco %i: ",i+1);
scanf("%s",pessoa[i].endereco);

printf("Digite o telefone %i: ",i+1);
scanf("%i",&pessoa[i].telefone);
}

for(int i=0; i<2; i++){
printf("\nnome da pessoa %i = %s: ",i+1,pessoa[i].nome);
printf("\nendereco da pessoa %i = %s: ",i+1,pessoa[i].endereco);
printf("\ntelefone da pessoa %i = %i: ",i+1,pessoa[i].telefone);
}






    return 0;
}