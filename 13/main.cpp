#include <cstdio>


int divisao(int n){

     int div = 0;
    for (int i = 1; i <= n ; ++i) {

        if(n/i == 0){

            div+= i;

        }

    }

    return div;
}

int main() {
    int valor;
    printf("Digite um valor ");
    scanf("%i",&valor);

    printf("soma -> %i",divisao(valor));
}
