#include <cstdio>


int soma(int n[15]){

    int valor = 0;
    int i;
    int pares=0;
    for(i =0;i<15;i++){

        printf("Informe os numeros: %d ",i);
        scanf("%d",&n[i]);
        if(n[i]%2==0){
            pares=n[i];

            valor++;
        }

    }
    printf("Os numeros pares que estao em x sao %d \n",pares);
    printf("A quantidade  dos valores pares ques estao em x  e: %d ", valor);


}

int main()
{

    int vetor[15];

    soma(vetor);




    return 0;
}