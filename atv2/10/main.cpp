#include <cstdio>

float calculopeso(int resp, float altura){
    float pesoideal ;

    if (resp == 1){
        pesoideal =(  (72.7 * altura) - 58);
    }else{
        pesoideal = ( (62.1 * altura) - 44.7);
    }

    return pesoideal;
}

int main() {
  int resp ;
float altura;
    do {
        printf("\n----------------------- \n");
        printf("1 -  peso ideal h\n");
        printf("2 - peso ideal m \n");
        scanf("%i",&resp);

        switch (resp) {
            case 1:

                printf("Digite a altura ");
                scanf("%f",&altura);
              printf("peso ideal é %.2f",calculopeso(resp,altura));
                break;
            case 2:

                printf("Digite a altura");
                scanf("%f",&altura);
                printf("peso ideal é %.2f",calculopeso(resp,altura));

                break;
        }

    } while (resp != 3);
}
