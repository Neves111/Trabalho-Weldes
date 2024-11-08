#include <stdio.h>

int soma_matriz(int *matriz, int linhas, int colunas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += *(matriz + i * colunas + j);
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
