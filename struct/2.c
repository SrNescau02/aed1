#include <stdio.h>




typedef struct{
    char marca[20];
    char modelo[20];
    char cor[20];
    int ano;
   
}carro;


int main(){

carro c1[2];

for(int i=0; i<2;i++){
    printf("Digite a marca do carro %d: ", i+1);
    scanf("%s", c1[i].marca);
    printf("Digite o modelo do carro %d: ", i+1);
    scanf("%s", c1[i].modelo);
    printf("Digite a cor do carro %d: ", i+1);
    scanf("%s", c1[i].cor);
    printf("Digite o ano do carro %d: ", i+1);
    scanf("%d", &c1[i].ano);
}


FILE* file = fopen("file.txt", "w");

if(file == NULL){
    printf("Erro ao abrir o arquivo");
    return 1;
}

for(int i=0; i<2;i++){
    fprintf(file, "%s ", c1[i].marca);
    fprintf(file, "%s ", c1[i].modelo);
    fprintf(file, "%s ", c1[i].cor);
    fprintf(file, "%d ", c1[i].ano);
    fprintf(file, "\n");

}

fclose(file);
return 0;
}


