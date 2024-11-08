#include <stdio.h>

/*
int main(){
    int num = 10; 
    int *ptr = &num;

    printf("%d", *ptr);

    return 0;
}
*/

/*
int incrementar(int *ptr){
        return ++(*ptr);
    }

int main(){
    int num = 0;

    printf("%d",incrementar(&num));

    return 0;
}
*/
/*
int trocar(int *ptr, int *ptr2){
    int num1 = *ptr;
    *ptr2 = *ptr;
    *ptr = num1;

    return *ptr2, *ptr;
}

int main(){
    int num1 = 1;
    int num2 = 2;

    printf("Antes %d %d\n", num1, num2);

    printf("Depois %d %d\n", trocar(&num1, &num2));

    return 0;
}
*/

/*
int main(){
    int num1 = 10;
    int *ptr = &num1;

    printf("%d\n", *ptr);
    printf("%d", ptr);

    return 0;
}
*/

/*
int media(int *vetor, int tamanho){
    int soma = 0;
    for (int i = 0; i < 3; i++){
        soma += vetor[i];
    }
    return soma/3;
}

int main(){
    int vetor[3] = {1,2,3};

    printf("%d", media(vetor, 3));

    return 0;
}
*/

int soma_matriz(int **matriz,int tamanho,int tamanho2){
    int soma = 0;

    for (int i = 0; i < tamanho; i++){
    for (int j = 0; j < tamanho2; j++){
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

    printf("%d", soma_matriz(matriz, 3, 3));

    return 0;
}
