#include <cstdio>

int main (){

    int maiorTemp[12];

    int menorTemp[12];

    int maiorAno = 0;
    int menorAno = maiorTemp[0];

    int maiorMes;
    int menorMes;

    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};



    for (int i = 0; i < 12; i++) {
        printf("Digite a maior temperadura do mes de %s : ", meses[i]);
        scanf("%d", &maiorTemp[i]);
        printf("\n");

        printf("Digite a menor temperatura do mes de %s : ", meses[i]);
        scanf("%d", &menorTemp[i]);
        printf("\n");

    }

    for(int i = 0; i < 12 ; i++) {

        if(maiorTemp[i] > maiorAno) {
            maiorAno = maiorTemp[i];
            maiorMes = i;
        }

        if(menorTemp[i] < menorAno) {
            menorAno = menorTemp[i];
            menorMes = i;
        }
    }

    printf("Maior temperatura do ano foi no  mes de %s e a temp foi de : %d \n", meses[maiorMes], maiorAno);
    printf("Menor temperatura do ano foi no  mes de %s e a temp foi de : %d \n", meses[menorMes], menorAno);



}