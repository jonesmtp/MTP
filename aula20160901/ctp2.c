#include<stdio.h>
#include<ctype.h>
int main () {
    int indice = 0;
    char investigador;
    char frase[250];
    printf("Escreva uma frase,\n");
    gets(frase);
    investigador = frase[indice];
    while (investigador!=NULL){
        frase[indice]=toupper(investigador);
        indice ++;
        investigador = frase[indice];

    }
    printf("%s\n", frase);

return 0;
}