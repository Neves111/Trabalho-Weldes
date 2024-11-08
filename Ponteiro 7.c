#include <stdio.h>

int soma_matriz(int *matriz, int tamanho1, int tamanho2) {
    int soma = 0;
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            soma += *(matriz + i * tamanho2 + j);
        }
    }
    return soma;
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("%d\n", soma_matriz((int *)matriz, 3, 3));

    return 0;
}
