#include <stdio.h>



int main(){

char a;
int contador=0;

for(int i=0;i<6;i++){
scanf("%c",&a);
if(a=='V'){
    contador++;
}
}

if(contador<1){
    printf("-1");
}else if(contador<3){
    printf("3");
}else if(contador<5){
    printf("2");
}else 
    printf("1");





return 0;


}