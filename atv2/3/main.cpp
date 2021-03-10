#include <cstdio>



int main() {
    int a = 1, b = 2;

    int *A, *B;

    A = &a;
    B = &b;

    printf("Valor para A \n");
    scanf("%i", &a);
    printf("Valor de A -> %i \n",a);

    B = A;

    printf("End 1  -> %0.2x \n",A);
    printf("End 2  -> %0.2x \n",B);



    return 0;
}