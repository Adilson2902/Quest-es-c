#include <cstdio>


int soma(int n[20]){

    int valor = 0;
    int i;
    for(i =0;i<20;i++){

        printf("Informe os numeros: %d ",i);
        scanf("%d",&n[i]);

        valor = valor + n[i];

    }
    printf("A soma dos valores ques estao em x  e: %d ", valor);


}

int main()
{

    int vetor[20];

    soma(vetor);




    return 0;
}