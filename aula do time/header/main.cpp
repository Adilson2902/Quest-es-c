#include <cstdio>
#include "rotinas.h"
int main() {
  int num1, num2,res;

  sub_rotina1();
  sub_rotina2();
  printf("Digite um numero:");
  scanf("%d,&num1");

    printf("Digite outro numero:");
    scanf("%d,&num1");


    res = sub_rotina3(num1 ,num2);

    printf("Resultado = %d \n",res);

}
