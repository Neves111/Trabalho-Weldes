#include <stdio.h>

int soma_matriz(int matriz[][3],int tamanho,int tamanho2){
    int soma = 0;
    int i, j;
    for (i = 0; i < tamanho; i++){
    for (j = 0; j < tamanho2; j++){
        soma += matriz [i][j];
    }
}
    return soma;
}

int main(){
    int matriz[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
};

    printf("%d", soma_matriz(matriz, 3,3));

    return 0;
} 
