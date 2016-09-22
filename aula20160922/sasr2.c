#include<stdio.h>
void numpares();
void numimpar();

int main(){
    int op;
    printf("Voce deseja ver os pares ou os impares?\nPara pares digite:1 e para impares digite 2:");
    scanf("%d", &op);
    switch(op){
        case 1: numpares();break;
        case 2: numimpar();break;
        }


return 0;
}
void numpares(){
    printf("2:4:6:8");
}
void numimpar(){
    printf("1:3:5:7:9");
}
