#include <cstdio>

int main() {

    int matriz[3][5];
    int numeromaior1520=0;
    for (int i = 0; i <3 ; ++i) {

        for (int j = 0; j <5 ; ++j) {

            printf("Digite um numero \n");
            scanf("%i", &matriz[i][j]);
            if(matriz[i][j] >=15 & matriz[i][j] <=20){
                numeromaior1520++;
            }

        }
    }

    printf("A quantidade de numeros maiores que 15 e 20 é %i", numeromaior1520);
}
