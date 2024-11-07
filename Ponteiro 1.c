#include <stdio.h>


void incrementar(int *valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", *valor);
    printf("O endereco de memoria e %d\n", valor);

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereco de memoria e %d\n", valor);
}

int main(){
    int cont = 10;

    printf("Antes de incrementar\n");
    printf("O contador vale %d\n", cont);
    printf("O endereco de memoria e %d\n", &cont);

    incrementar(&cont);

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", cont);
    printf("O endereco de memoria e %d\n", &cont);

return 0;
}
