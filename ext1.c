#include <stdio.h>
#include <stdlib.h>

int main(){
    float * vetor = NULL;
    int opc;

    do{
        vetor = recebeNumero(vetor,...);
        printf(...,media());
        printf(...,maior());
        printf(...,menor());
        printf("Outro? (0 - nao, 1 - sim):");
        scanf(%d, &opc);
    }while(opc !=0);
    return 0;
}
    float * recebeNumero(float * vetor,...){
        if(vetor == NULL)...vetor = ...malloc...
        else...vetor = ...realloc...
        return vetor;
    }

