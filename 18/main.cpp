#include <stdio.h>
#include <stdlib.h>
int vetornumeros(int vetor[30]){
int quantidademaiorquezero = 0, menorquezero = 0;

int A[30], B[30];
    for (int i = 0; i < 30 ; ++i) {
        if(vetor[i] > 0 ){
            A[quantidademaiorquezero];
            quantidademaiorquezero++;

        }else{
            B[menorquezero];
            menorquezero++;
        }

    }





    return  A, quantidademaiorquezero,B,menorquezero;

}

int main() {
int vetor[30];

    for (int i = 0; i <30 ; ++i) {
        printf("Digite Valores: ");
        scanf("%i",vetor[i]);

    }


int valores = vetornumeros(vetor);



}
