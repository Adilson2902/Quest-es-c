#include <cstdio>

int segundostotal(int h, int m , int s){
    return (h*3600)+(m*60)+s;
}

int main() {
int hora = 0, minuto = 0,segundos = 0;


printf("Digite a hora");
scanf("%i", &hora);
    printf("Digite o minuto");
    scanf("%i", &minuto);

    printf("Digite os segundos");
    scanf("%i", &segundos);


    printf("os segundos são %i", segundostotal(hora,minuto,segundos));

}
