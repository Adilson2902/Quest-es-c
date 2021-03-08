#include <cstdio>
#include <cstdlib>
int main() {
    int *x;

    x = (int *) malloc(1 );
    printf("Valor  Int \n");
    scanf("%i",&*x);

    printf("end -> %x",x);
    return 0;
}
