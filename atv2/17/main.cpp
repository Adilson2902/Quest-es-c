#include <cstdio>

float salarios(float salario[3]){

    float media = 0;

    for (int i = 0; i <5 ; ++i) {
        media+=salario[i];
    }


    return media/3;


}
int maior(int idade[3]){
    int maior = idade[0];
    for (int i = 0; i <3 ; ++i) {

        if (idade[i] > maior){
            maior = idade [i];
        }
    }

    return maior;
}

int menor(int idade[3]){
    int menor = idade[0];
    for (int i = 0; i <3 ; ++i) {

        if (idade[i] < menor){
            menor = idade [i];
        }
    }

    return menor;
}

void mulherdefilhos(int quant[3], char sexo[3], float salario[3]){
int qunt = 0;

    for (int i = 0; i <3 ; ++i) {
        if (sexo[i] == 'f'&& quant[i] >=3 &&  salario[i] <= 500){
            qunt++;
        }
    }


    printf("Quantidade de mulheres com 3 filhos -> %i",qunt);
}


void Pesquisa(){
    int idade[15],numerosdefilhos[15];
    char sexo[15];
    float salario[15];


    for (int i = 0; i < 3 ; ++i) {

        printf("Digite sua sexo\n");
        scanf("%s",&sexo[i]);

        printf("Digite sua Idade");
        scanf("%i",&idade[i]);

        printf("Digite sua numero de filho");
        scanf("%i",&numerosdefilhos[i]);



        printf("Digite sua Salario\n");
        scanf("%f",&salario[i]);
    }
printf("%.0f \n", salarios(salario));
printf("%i \n", maior(idade));
    printf("%i \n", menor(idade));
mulherdefilhos(numerosdefilhos,sexo,salario);
}


int main() {
Pesquisa();


}
