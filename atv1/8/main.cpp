#include <cstdio>

int main() {
    int vet[6];
    int quntpar = 0,quntimpar = 0;

    for (int & i : vet) {

        printf("digite o valor");
        scanf("%i",&i);

    }
    printf("numeros pares -->");
    for (int i = 0; i <6 ; ++i) {


        if(vet[i] %2 == 0){
            printf(" %i ",vet[i]);
            quntpar++;
        }

    }

    printf("\n quantidade de pares -> %i \n",quntpar);
    printf("\n numeros impares -->");

    for (int i = 0; i <6 ; ++i) {


        if(vet[i] %2 != 0){
            printf(" %i ",vet[i]);
            quntimpar++;
        }

    }

    printf("\n quantidade de impares -> %i",quntimpar);

}
