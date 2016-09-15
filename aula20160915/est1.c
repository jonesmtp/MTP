#include <stdio.h>
struct Ponto {
    float x;
    float y;
};
int main (){
    struct Ponto A,B,S;
    float distancia;
    RECEBE("A",A); RECEBE("B",B);
    SOMA(A,B,S);
    MOSTRA(S);
    distancia = DISTANCIA(A,B);
    printf("A distancia entre eles: %g\n", distancia);

    return 0;
}
