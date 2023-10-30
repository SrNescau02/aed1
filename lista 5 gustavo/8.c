#include <stdio.h>



void funcao(int n){

 if(n==0){
   return;
 }


 if(n>0){
    printf("\n");
    for(int i=0; i<n; i++){
        printf(" * ");
        
    }
 }
funcao(n-1);
}



int main(){
    
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    funcao(n);
    return 0;

}