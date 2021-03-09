#include <cstdio>

int valor(int n){

    float soma=0;

    for (float i=0;i <= n ;i++){

        soma = soma + (n*n + 1.0) / (n + 3.0);

        printf("%0.2f \n", soma);
    }


}

int main(){

    int n;

    printf("Informe um numero");
    scanf("%d",&n);
    valor(n);
}