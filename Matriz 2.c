#include <stdio.h>

int main(){

int matriz[3][3]; 

int i;
int j;
int soma = 0;

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        soma += matriz [i][j];
    }
}
    printf("%d", soma);

    return 0;
}
