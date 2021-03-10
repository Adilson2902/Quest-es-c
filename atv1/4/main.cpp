#include <cstdio>

int main() {
  int valor = 0;
  printf("----------- \n");
  printf("Digite o valor da tabuada \n");
  scanf("%i",&valor);


    for (int i = 0; i <=10 ; i++) {

        printf("%d x %d = %d \n",valor,i,(valor * i));

    }
}
