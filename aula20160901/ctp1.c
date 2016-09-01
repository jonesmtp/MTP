#include<stdio.h>
#include<ctype.h>
int main(){

    char frase[256];
    char investigador;
    int indice=0;

    printf("Escreva uma frase:");
    gets(frase);
    investigador = frase[indice];
    while (investigador!='\0'){
        frase[indice]=tolower(investigador);
        indice++;
        investigador = frase[indice];
    }
    printf("%s\n", frase);
    return 0;
}
