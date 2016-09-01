#include<complex.h>
#include<stdio.h>
int main() {
    double complex z1, z2, soma, multiplicacao;
    double preal, pimag;

    printf("Escreva a parte real de z1:"); scanf("%lf", &preal);
    printf("Escreva a parte imaginaria de z1:"); scanf("%lf", &pimag);
    z1 = preal + pimag * I;

    printf("Escreva a parte real de z2:"); scanf("%lf", &preal);
    printf("Escreva a parte imaginaria de z2:"); scanf("%lf", &pimag);
    z2 = preal + pimag * I;

    soma = z1 + z2;
    multiplicacao = z1 * z2;

    printf("Soma: %lf + %lf i\n", creal(soma), cimag(soma));
    printf("Multiplicacao: %lf + %lf i\n", creal(multiplicacao), cimag(multiplicacao));



return 0;
}
