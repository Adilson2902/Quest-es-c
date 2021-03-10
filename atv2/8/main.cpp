#include <cstdio>
#include <cmath>

double raiototal( double raio){

    return ((4/3)* pow(raio,3));
}

int main() {

    double raio;

    printf("Digite o raio");
    scanf("%lf",&raio);


   printf("o raio de uma esfera é %.2lf" ,raiototal(raio));


    return 0;
}
