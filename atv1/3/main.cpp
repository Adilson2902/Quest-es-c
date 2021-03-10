#include <cstdio>

int main() {
    char nome;

    float  altura = 0;

    printf("_____________ \n");
    printf("Digite a para calcular peso de homens \n");
    printf("Digite b para calcular peso de mulher");
    scanf("%c",&nome);


    switch (nome) {
        case 'a' :
            printf("-------- \n");
            printf("Digite a altura \n");
            scanf("%f", &altura);

            printf("o peso ideal é de %.2f",((72.7*altura)-58));

            break;
        case 'b':
            printf("-------- \n");
            printf("Digite a altura \n");
            scanf("%f", &altura);

            printf("O peso ideal é de %.2f",((62.1*altura)-44.7));

            break;



    }



}
