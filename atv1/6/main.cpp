#include <cstdio>

int main() {
    int  idade= 0 , contador = 0, idadedigitada = 0;
    do {
        printf("Digite a idade  \n");
        scanf("%i",&idadedigitada);
        contador++;
        idade = idade + idadedigitada;


    } while (idadedigitada !=0);


    printf("A media de idade é = %d",(idade/(contador-1)));

    return 0;
}
