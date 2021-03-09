#include <cstdio>

int triangulo(int a , int b , int c){

    if(a + b > c && a + c>b && b + c > a){
        printf (" OS 3 LADOS FORMAM UM TRIANGULO \n");


        if (a==b && a==c)
        {
            printf(" O triangulo e Equilatero");
        }
        else if (a==b || a==c || b==c){
            printf("O triangulo e Isoceles");
        }
        else {
            printf("O triangulo e Escaleno");
        }
    }


}

int main(){
    int a=0;
    int b=0;
    int c=0;

    printf("Informe o valor a para o lado 1 triangulo \n");
    scanf("%d",&a);
    printf("Informe o valor b para o lado 2 triangulo \n");
    scanf("%d",&b);
    printf("Informe o valor c para o lado 3 triangulo \n");
    scanf("%d",&c);

    triangulo(a,b,c);
}