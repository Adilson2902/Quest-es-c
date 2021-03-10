#include  <cstdio>

int main() {
  int resp = 0;
  float nota1 = 0 , nota2= 0 , nota3 = 0  ;
  float peso1= 0 , peso2 = 0 , peso3 = 0;
    float mediaponderada = 0;
    do{
      printf(" \n -------------- \n");
      printf("1 - Média aritmética \n");
      printf("2 - Média ponderada \n");
      printf("3 - Sair \n");

      scanf("%d",&resp);

      switch (resp) {
          case 1:
              printf("Digite a primeira nota \n");
              scanf("%f",&nota1);
              printf("Digite a segunda nota \n");
              scanf("%f",&nota2);

              printf("Media das notas é %.2f",(nota1+nota2)/2);
              break;
          case 2:
              printf("Digite a primeira nota \n");
              scanf("%f",&nota1);
              printf("Digite o peso da primeira nota \n" );
              scanf("%f",&peso1);


              printf("Digite a segunda nota \n");
              scanf("%f",&nota2);
              printf("Digite o peso da segunda nota \n");
              scanf("%f",&peso2);

              printf("Digite a terceira nota \n");
              scanf("%f",&nota3);
              printf("Digite o peso da terceira nota \n");
              scanf("%f",&peso3);

       mediaponderada =(nota1+peso1)+( nota2+peso2)+(nota3+peso3)/peso1+peso2+peso3;


             printf("Media ponderada das notas é %.2f \n",mediaponderada);
              break;
      }





  } while (resp != 3);
}
