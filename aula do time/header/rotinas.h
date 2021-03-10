
#include <cstdio>



void  sub_rotina1(){

    printf("Mostra uma mensagem \n");
}

void sub_rotina2(){
    int a,b,c;

    printf("Digite o valor de a : ");;
    scanf("%d",&a);
    printf("Digite  o valor de b: ");
    scanf("%d",&b);
    c = a - b;

    printf("Resultado = %d \n",c);

}


int sub_rotina3(int x , int y){
    int res;
    res = x * y;

    return res;
}