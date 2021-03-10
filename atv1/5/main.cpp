#include <cstdio>

int main() {
    int resp = 0;
    float preco = 0 , precototal = 0;
    do{
        printf("--------------- \n" );
        printf("1 - para Limpeza \n");
        printf("2 - para  Alimentação \n");
        printf("3 - para Vestuario \n");
        printf("9 - para Sair \n");
        scanf("%i", &resp);

        switch (resp) {
            case 1:
                printf("Digite o preço \n");
                scanf("%f \n", &preco);
                if(preco <=25) {
                        precototal = preco + (preco * 0.05);
                    printf("%.2f \n",precototal);
                }else{
                    precototal = preco + (preco * 0.12);
                    printf("%.2f \n",precototal);
                }
                break;

            case 2:
                printf("Digite o preço \n");
                scanf("%f \n" , &preco);
                if(preco <=25) {
                    precototal = preco + (preco * 0.08);
                    printf("%.2f \n",precototal);
                }else{
                    precototal = preco + (preco * 0.15);
                    printf("%.2f \n",precototal);
                }
                break;


            case 3:
                printf("Digite o preço \n");
                scanf("%f",& preco);
                if(preco <=25) {
                    precototal = preco + (preco * 0.10);
                    printf("%.2f \n" ,precototal);
                }else{
                    precototal = preco + (preco * 0.18);
                    printf("%.2f \n",precototal);
                }
                break;

        }

    }while(resp != 9);



}
