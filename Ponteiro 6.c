include <stdio.h>

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
