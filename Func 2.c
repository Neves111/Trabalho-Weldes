#include <stdio.h>

int Par(int n) {
    return n % 2 == 0;
}

int main() {
    int n;

    scanf("%d", &n);

    if (Par(n)) {
        printf("par\n");
    } else {
        printf("impar\n");
    }

    return 0;
}
