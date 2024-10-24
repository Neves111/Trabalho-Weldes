#include <stdio.h>

struct Retangulo {
    float altura;
    float largura;
}; 

int main (){

struct Retangulo retangulo;

    printf("Altura: ");
    scanf("%f", &retangulo.altura);

    printf("Largura: ");
    scanf("%f", &retangulo.largura);

    printf("Perimetro: %.2f", ((retangulo.altura*2) + (retangulo.largura*2)));

    return 0;
}
