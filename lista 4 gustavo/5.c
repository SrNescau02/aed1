#include <stdio.h>
#include <string.h>


int main(){

char frase[100];
int tam=0;
int contador=0;

printf("\n digite uma frase");
scanf("\n %s",frase);

tam=strlen(frase);

for(int i=0;i<tam;i++){
    if(frase[i]==frase[tam-i-1]){
        contador++;
    }
}
if(contador==tam){
    printf("\n palavra palindroma");
}else 
printf("\n palavra nao palindroma");



return 0;

}