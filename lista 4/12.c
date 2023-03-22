/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int alunos;
    float nota;
    
    float media=0;
    

    printf("digite quantos alunos quer testar \n ");
    scanf("\n %i",&alunos);

    for(int i =1;i<=alunos;i++){

        float soma = 0;  
    
        for(int a=1;a<=3;a++){
            printf("digite a nota %i do aluno %i \n ",a, i);
            scanf("\n %f",&nota);
            
            soma+=nota;
        }

       

        media=soma/alunos;
        
        printf("\n numero da soma = %f media = %f \n",soma,media);
        
    }

    

    return 0;
}
