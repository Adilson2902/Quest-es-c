#include <cstdio>

int main() {
    double valor;
    double *a, *b;
    printf("End Valor -> %0.2x \n",&valor);
    printf("End *a  -> %0.2x \n",a);
    printf("End *b  -> %0.2x \n",b);

    printf("Valor A : \n");
    scanf("%lf",&valor);

    a = &valor;
    b = a;

    printf("Valor :%lf \n",valor );
    printf("End Valor -> %0.2x \n",&valor);
    printf("End *a  -> %0.2x \n",a);
    printf("End *b  -> %0.2x \n",b);

    printf("bytes valor %lu \n",sizeof(valor));
    printf("bytes *a %lu \n",sizeof(a));
    printf("bytes *b %lu \n",sizeof(a));
    return 0;
}