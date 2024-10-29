#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

int main () {

    struct Ponto ponto1;
    struct Ponto ponto2;
    
        printf("Digite o X1: ");
        scanf ("%f", &ponto1.x);
        printf("Digite o X2: ");
        scanf ("%f", &ponto2.x);
    
        
        printf("Digite o Y1: ");
        scanf ("%f", &ponto1.y);
        printf("Digite o Y2: ");
        scanf ("%f", &ponto2.y);

    printf("%f", sqrt((ponto2.x - ponto1.x)*(ponto2.x - ponto1.x) + (ponto2.y - ponto1.y)*(ponto2.y - ponto1.y)));

    return 0;
}
