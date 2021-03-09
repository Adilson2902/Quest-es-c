#include <cstdio>

float alt=0;
int sexo ;

float pesos(float alt, int sexo){


    printf("Informe sua altura: ");
    scanf("%f",&alt);
    printf("Informe seu sexo: ");
    scanf("%d",&sexo);


    float pesoideal=0;

    if ( sexo == 1 ){

        pesoideal = (72.7 *alt)-58;


    }else{

        pesoideal = (62.1 *alt)-44.7;

    }

    printf("O peso ideal foi: %0.2f ",pesoideal);
}
int main()

{


    pesos(alt,sexo);
}