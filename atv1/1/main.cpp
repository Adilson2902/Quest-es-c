#include <cstdio>
#include <cmath>


int main() {
  int resp ;
  float raio;
  double pi = M_PI;


    do{
        printf("\n------------------------  \n");
        printf("       CALCULAR \n");
        printf("------------------------- \n");
        printf("1 - Comprimento da Esfera \n");
        printf("2 - Area do Comprimento \n");
        printf("3 - Volume de uma esfera \n");
        scanf("%d",&resp);

        switch (resp) {

            case 1:
                printf("Digite o raio \n");
                scanf("%f",&raio);

                printf("O comprimento de uma esfera é %f ",(2*(pi*raio)),"\n");
                break;
            case 2:
                printf("Digite o raio \n");
                scanf("%f",&raio);
               printf("A área  de uma esfera é %f",(pow(pi*raio,2)));

                break;

            case 3:
                printf("Digite o raio \n");
                scanf("%f",&raio);
                double volume =((pow(pi*raio,3))*0.75);

                printf("o volume de uma esfera  é %f", volume);

                break;
        }


  } while (resp != 0);
    return 0;
}
