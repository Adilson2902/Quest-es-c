#include <cstdio>

int main() {

    int numero;

    printf("Digite um numero");
    scanf("%i",&numero);

    if(numero < 0){

        printf("o Numero é negativo");
    }else if( numero == 0){
        printf("o Numero é neutro");
    }else{
        printf("o Numero é positivo");
    }

    return 0;
}
