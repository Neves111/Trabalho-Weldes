#include <stdio.h>

int main(){

int matriz[3][3];

int i;
int j;
int soma;
int k;

scanf ("%d", &k);

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        printf("%d ", matriz [i][j] * k);
    }
    printf("\n");
}
}
