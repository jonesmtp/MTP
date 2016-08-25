#include <stdio.h>
#include <stdlib.h>
int main () {
    float L, A;
    printf("Insira o valor do lado do quadrado:");
    scanf("%f", &L);
    A=L*L;
    printf("A area do quadrado e: %.3f\n", A);
    return 0;
}
