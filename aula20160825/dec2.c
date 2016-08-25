#include <stdio.h>
#include <time.h>

int main () {
    srand (time(1));
    int numero, soma;
    printf("Insira um numero inteiro nao negativo:");
    scanf("%d", &numero);
    soma=(numero + (rand()%2+1));

    if(soma%2==0)
        printf("O numero e par.\n");
    else
        printf("O numero e impar.\n");



return 0;
}
