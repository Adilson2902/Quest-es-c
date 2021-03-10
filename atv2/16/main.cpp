#include <cstdio>

int multi(int x , int z){
    int r=1;

    for(int i=0 ;i<z;i++){


        r=r*x;

    }

    printf("O resultado de x^z e :%d",r);

}
int main(){
    int x,z;

    printf("Informe um numero \n ");
    scanf("%d",&x);

    printf("Agora informe o numero para elevar o numero anterior \n");
    scanf("%d",&z);

    multi(x,z);

}