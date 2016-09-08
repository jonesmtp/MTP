#include <stdio.h>
#include <stdlib.h>
int main () {
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int contagem = 0;
    int tam = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;
    for(; ponteiro < vetor + tam; ponteiro ++){
        printf("%p: %X\n", ponteiro, *ponteiro);
        if(*ponteiro!=0x0) contagem ++;
    }
    printf("Sao %d os bytes de memoria com apenas 1's.\n", contagem);
    return 0;
}
