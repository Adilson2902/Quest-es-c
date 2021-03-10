#include <cstdio>

int main() {
   int matriz[4][5];
   int somavalores[5];
   int contadordemaior=0;
    for (int i = 0; i <4 ; i++) {
        for (int j = 0; j <5 ; j++) {
           printf("Digite o valor para a matriz \n");
           scanf("%i",&matriz[i][j]);

           if(j == 0){
               somavalores[0] = somavalores[0] + matriz[i][j];

           }
           else

           if(j == 1){
               somavalores[1] = somavalores[1] + matriz[i][j];
           }
           else

           if(j == 2){

               somavalores[2] = somavalores[2] + matriz[i][j];
           }
           else

           if(j == 3){
               somavalores[3] = somavalores[3] + matriz[i][j];

           }else
           {
               somavalores[4] = somavalores[4] + matriz[i][j];
           }

        }
    }

    printf("Somas das colunas \n");
    for (int i = 0; i <5 ; i++) {
     if( somavalores[i] > 10){
         printf("%i \n",somavalores[i]);
         contadordemaior++;
     }

    }

    if (contadordemaior==0){
        printf(" não teve numero maior que 10 :(");
    }



}
