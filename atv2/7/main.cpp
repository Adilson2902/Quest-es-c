#include <cstdio>

int somatotal(int n, int n1){
    if(n/n1 == 0){
        return 0;
    }else{
        return n1+1;
    }
}

int main() {
    int n1 = 0 ;
    int n2 = 0;

    printf("Digite n1\n");
    scanf("%i", &n1);
    printf("Digite n2\n");
    scanf("%i",&n2);

    printf("%i", somatotal(n1,n2));

}
