#include <cstdio>

int main() {
    float preco = 0, precototal = 0;
    int codigo;


    printf("---------  \n");
    printf("Digite o Preço \n");
    scanf("%f", &preco);

    printf("Digite o código \n");
    scanf("%d", &codigo);
   if( codigo <= 30){
       precototal = preco ;

       printf("Você nada  de desconto \n");
       printf("Valor total =  %.2f", precototal);
   }

    else if (codigo > 30 & codigo <= 100) {
        precototal = preco + (preco * 0.10);


        printf("Você ganhará 10   de desconto \n");
        printf("Valor total =  %.2f", precototal);

    } else {
        precototal = preco + (preco * 0.15);

        printf("Você ganhará 15 de desconto \n");

        printf("Valor total = %.2f", precototal);
    }

}
