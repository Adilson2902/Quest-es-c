#include <cstdio>
#include <string.h>
int main() {

   char  nome[30];

        printf("Digite seu Nome");
        scanf("%s",&nome);
    int quantidade = strlen(nome);


    for (int i = 0; i < quantidade; ++i) {
    printf("%c \n",nome[i]);
    }

}
