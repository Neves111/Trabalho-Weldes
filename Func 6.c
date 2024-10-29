#include <stdio.h>

int soma(int vet[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += vet[i];
    }
    return soma;
}

int main (){
    int tam;
  
    scanf("%d", &tam);

    int vet[tam];
  
    for (int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
  
    printf("%d", soma(vet,tam));

    return 0;
}
