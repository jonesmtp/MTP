#include <stdio.h>
int main () {
    float base, altura, area;
    printf("insira o valor da base do triangulo");
    scanf("%f", &base);
    printf("insira o valor da altura do triangulo");
    scanf("%f", &altura);
    area=(base*altura)/2;
    printf("A area do triangulo e: %.3f\n", area);



    return 0;
}
