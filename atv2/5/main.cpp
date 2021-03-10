#include <cstdio>

int soma(int n){
int somatotal = 0;

    for (int i = 0; i <=n ; ++i) {
        somatotal = somatotal + i;

    }

    return somatotal;
}


int main(){

    int n ;
        printf("Digite o numero da soma \n");
        scanf("%d",&n);

      printf( "a soma dos valores é %i", soma(n));



}