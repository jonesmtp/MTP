#include<stdio.h>
#include<stdint.h>
int main(){
    double fatorial = 1;
    int i;
    int numero;
    printf("Fatorial de:\n")
    scanf("%lf", &numero);
    for(i<2; i<=numero, i++);
        fatorial=fatorial*i;
    printf("O fatorial de %d e %lf eh:\n", numero, fatorial);


return 0;
}
