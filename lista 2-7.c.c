/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int impar=0;
    int a;
    int b;
    printf("digite quantos numeros vc quer digitar");
    scanf("\n %i",&a);
    
    for(int i=0;i<a;i++){
        printf("\n digite o valor a ser testado ");
        scanf("\n %i",&b);
        
        if(b%2!=0){
            impar+=b;
        }
         
    }
    printf("\n valor da soma dos numeros impares=%i",impar);

    return 0;
}
