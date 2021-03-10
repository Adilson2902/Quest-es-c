#include <cstdio>



void geradorNPrimos() {
    int n, nMax, i, j, totalDivisores;
    int vetorPrimos[3];
    int contador = 0;
    printf("Digite o limite superior para os numeros primos(Minimo 107): ");
    scanf("%d", &nMax);


    while(nMax < 107) {

        printf("Digite o limite superior para os numeros primos(Minimo 107): ");
        scanf("%d", &nMax);
    }


    for(i = 100; i <= nMax; i++) {
        totalDivisores = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                totalDivisores++;
            }
        }

        if(totalDivisores == 2) {
            contador++;
            printf("%4d ", i);

        }

        if(contador >= 3) {

            break;

        }
    }
}

int main(){

    geradorNPrimos();


}