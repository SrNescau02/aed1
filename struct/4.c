#include <stdio.h>


typedef struct{
    char marca[20];
    char modelo[20];
    char cor[20];
    int ano;
   
}carro;



int main(){
    carro c1[2];

    FILE* file = fopen("file.txt", "r");
    if(file == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }


    for(int i=0; i<2;i++){
        fscanf(file, "%s", c1[i].marca);
        fscanf(file, "%s", c1[i].modelo);
        fscanf(file, "%s", c1[i].cor);
        fscanf(file, "%d", &c1[i].ano);
    }

    fclose(file);

    for(int i=0; i<2;i++){
        printf("Marca: %s\n", c1[i].marca);
        printf("Modelo: %s\n", c1[i].modelo);
        printf("Cor: %s\n", c1[i].cor);
        printf("Ano: %d\n", c1[i].ano);
    }


}