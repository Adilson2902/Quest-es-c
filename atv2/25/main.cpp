#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    printf("Gerando valores aleatorios \n");
    printf("____\n");
    int matriz[10][10];
    int cont=0;
    int maior = 0;



    srand(time(NULL));

    for(int i=0;i<10;i++){
        for (int  x = 0; x < 10; x++)

        {
            matriz[i][x]=rand() % 120;

        }
    }

    for(int x=0;x<10;x++){

        for(int y=0;y<10;y++){
            printf("%d ",matriz[x][y]);

            if(matriz[x][y] > maior) {
                maior = matriz[x][y];
            }
        }
        printf("\n\n");
    }



    printf("Maior elemento da diagonal principal: %d", maior);

}