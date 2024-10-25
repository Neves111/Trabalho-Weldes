#include <stdio.h>

int quadrado(int n) {
    return n * n;
}

int main() {
    int num;

    scanf("%d", &num);

    printf("%d\n", quadrado(num));

    return 0;
}
