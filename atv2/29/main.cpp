#include <cstdio>


struct Alunos {
    int codigo;
    float nota[3];
};





int main (){

    struct Alunos alunos[10];

    int numeros[10];

    float media = 0;

    float mediaAluno = 0;


    for(int i = 0 ; i < 2; i++) {

        printf("Digite o codigo do aluno: \n");
        scanf("%d", &alunos[i].codigo);
        printf("\n");
        for(int x = 0; x < 4; x ++) {

            printf("Digite a nota do aluno com codigo %d : ", alunos[i].codigo);
            scanf("%f", &alunos[i].nota[x]);

        }
    }

    for(int i = 0; i < 2 ; i++ ) {


        for(int x = 0 ; x < 4 ; x++) {
            media = media + alunos[i].nota[x];

        }


    }

    media = media / 8.0;

    printf("Media aritmetica de todos os alunos %f", media);

}