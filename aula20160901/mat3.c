#include<math.h>
#include<stdio.h>
int main(){
    double numero, base, lognum;
    printf("Escreva um numero desejado:\n");
    scanf("lf", &numero);
    printf("Escreva a base do numero:\n");
    scanf("lf", &base);


    lognum = log(numero)/log(base);
    {
    printf("\nO log eh: %f", lognum);
    }

return 0;
}
