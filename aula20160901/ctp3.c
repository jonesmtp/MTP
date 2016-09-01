#include<stdio.h>
#include<ctype.h>
int main () {
    int indice = 0, contador = 0;
    char investigador;
    char frase[250];
    printf("Escreva uma frase ai fdp:");
    gets(frase);
    investigador = frase[indice];
    while (investigador) {
        if (isalpha(investigador)!=0)
            contador++;

    }
    indice++;
    investigador = frase[indice]; {

    printf("\nO numero de caracteres eh: %d", contador);
    }

return 0;
}
