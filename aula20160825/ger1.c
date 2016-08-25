#include <stdio.h>
int main() {
    int numero, i;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    for (i = 2; i< numero; i++) {
        if(numero%i == 0) {
            printf("O numero nao e primo");
            break;
        }
    }
    if(i==numero) printf("Primo.\n");
    return 0;
}



















