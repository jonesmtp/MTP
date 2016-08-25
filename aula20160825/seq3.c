#include <stdio.h>
int main() {
    float A, B, C, mediafinal;
    printf("insira a nota do aluno A:");
    scanf("%f", &A);
    printf("insira a nota do aluno B:");
    scanf("%f", &B);
    printf("insira a nota do aluno C:");
    scanf("%f", &C);

    mediafinal= (2*A + 3*B + 5*C)/10;


    printf("As medias dos aluno sao: %.1f\n", mediafinal);



return 0;
}
