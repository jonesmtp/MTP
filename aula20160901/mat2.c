#include<math.h>
#include<stdio.h>
int main(){
    double ladoA, ladoB, ladoC, angulo;
    printf("Digite um dos lados de triangulo:\n");
    scanf("%lf", &ladoB);
    printf("Digite outro lado do triangulo:\n");
    scanf("%lf", &ladoC);
    printf("Escreva o angulo formado entre esses dois lados:");
    scanf("%lf", &angulo);

    ladoA=sqrt((pow(ladoB, 2) + pow(ladoC, 2)) - 2*(ladoB*ladoC)*cos(angulo));
    printf("O valor do angulo que falta eh: %f.0", ladoA);



return 0;
}
