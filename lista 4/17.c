#include<stdio.h>


int main(){

     int soma1=1,soma2=1;
     int n;
     
     
     printf("\n digite um valor");
     scanf("\n %i",&n);



   for(int i=0;i<n;i++){

soma1+=2;
soma2+=1;


   printf("\n %i/%i",soma1,soma2);
   }


    printf("\n valor final da soma %i/%i",soma1+1,soma2+1);

    return 0;



}