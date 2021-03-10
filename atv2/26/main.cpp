#include<cstdio>
#include <cstdlib>
#include <ctime>


int main(){

    printf("Gerando valores aleatorios \n");
    printf("____\n");
    int matriz[10][5];
    int cont=0;
    int soma = 0;



    srand(time(NULL));

    for(int i=0;i<10;i++){
        for (int  x = 0; x < 5; x++)

        {
            matriz[i][x]=rand() % 20;

        }
    }

    for(int x=0;x<10;x++){

        for(int y=0;y<5;y++){
            printf("%d ",matriz[x][y]);


            if(x > 6) {
                soma = soma + matriz[x][y];
            }
        }
        printf("\n\n");
    }



    printf(" soma de todos os elementos localizados abaixo da sexta linha dessa matriz;: %d", soma);

}