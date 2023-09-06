#include <stdio.h>
#include <string.h>


int main(){

    char p[50];
    char p2[50];

    scanf("%s",p);


    int tamanho=strlen(p);


    for(int i=0;i<tamanho;i++){
        p2[i]=p[tamanho -1 - i];
       
    }
 p2[tamanho] = '\0';

   
printf("\n %s",p2);



return 0;
}