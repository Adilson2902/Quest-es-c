#include <cstdio>

struct dados{
    int   idade;
    int   sexo;
    float salario;
    int   nfilhos;
};


int main () {
    int i = 0;
    float salarios = 0;
    struct dados habitante[2];
    float media_filhos=0;
    int qtdmulheres = 0;
    int opcao;
    float maiorisalario = 0;
    float percentual=0;
    float cont=0.0;
    int total = 0;




    while(opcao!= 1){
        printf ("Digite a sua idade: \n");
        scanf ("%d", &habitante[i].idade);
        printf ("Digite o seu sexo - 1 p/ Feminino e 2 p/ Masculino: \n");

        scanf ("%d", &habitante[i].sexo);

        printf ("Digite o seu salario:\n");
        scanf ("%f", &habitante[i].salario);


        printf ("Digite o numero de filhos:\n");
        scanf ("%d", &habitante[i].nfilhos);

        salarios += habitante[i].salario;

        media_filhos+=habitante[i].nfilhos;
        printf("Deseja inserir mais habitantes? \n");
        scanf("%d",&opcao);
        i++;



    }

    int size_habitante = (int)( sizeof(habitante) / sizeof(habitante[0]) );
    printf("Media De Salarios => %.2f\n",salarios / size_habitante);
    printf("Media De filhos => %.2f \n",media_filhos / size_habitante);

    for (int i =0; i<2;i++){
        if(habitante[i].salario<=380){
            cont++;
        }

        else {
            total++;
        }

        if(habitante[i].salario > maiorisalario) {
            maiorisalario = habitante[i].salario;
        }
    }





    percentual=(cont /100.0) * (total);
    printf("O maior salario e => %.2f\n",maiorisalario);
    printf(" O percentual %.2f",percentual);




    return 0;
}