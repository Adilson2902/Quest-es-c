#include <cstdio>

void  valorespositivos(int n){
    if(n > 0) {


        float fatorial = 1;


        for (int i = n; i > 0; i--) {

            fatorial = fatorial * (n * i);


        }
        printf(" fatorial de %i  é %.0f", n, fatorial);
    }else{
        printf("numero é negativo");
    }
}

int main() {
    int n ;

    printf("Digite um numero ");
    scanf("%i",&n);

    valorespositivos(n);
    return 0;
}