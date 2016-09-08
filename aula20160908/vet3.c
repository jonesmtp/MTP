#include <stdio.h>
int main () {
    int vet[10];
    int i, soma=0, produto;
    for(i=0; i<10; i++){
        printf("Digite o %d numero do vetor:", i+1);
        scanf("%d", &vet[1]);
        soma = soma + vet[i];
        produto = produto * vet[i];

        }
        printf("A soma eh: %d", soma);
        printf("\nO produto eh: %d", produto);
        return 0;
}
