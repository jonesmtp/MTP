#include<math.h>
#include<stdio.h>
int main(){
    double P1_x, P1_y, P2_x, P2_y, distancia;
        printf("Entre com x de P1:"); scanf("%lf", &P1_x);
        printf("Entre com y de P1:"); scanf("%lf", &P1_y);
        printf("Entre com x de P2:"); scanf("%lf", &P2_x);
        printf("Entre com y de P2:"); scanf("%lf", &P2_y);

        distancia = sqrt(pow(P2_x - P1_x, 2.) + (pow(P2_y - P1_y, 2.)));

        {
            printf("A distancia entre eles: %lf.\n", distancia);
        }






return 0;
}
