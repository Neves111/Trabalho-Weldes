#include <stdio.h>

struct Livro {
    char titulo [50];
    char autor [50];
    int ano;
    char isbn [50];
};

int main () {

        struct Livro livro[5];

    for (int i = 1; i <= 5; i++){

        printf("Titulo: ");
        scanf ("%s", livro[i].titulo);

        printf("Autor: ");
        scanf ("%s", livro[i].autor);

        printf("Ano: ");
        scanf("%d", &livro[i].ano);

        printf("ISBN: ");
        scanf ("%s", livro[i].isbn);    
        
    }

        for (int i = 1; i <= 5; i++){

        printf("\nLivro %d\n", i);

        printf("Titulo: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].autor);
        printf("Anao: %d\n", livro[i].ano);
        printf("ISBN: %s\n \n", livro[i].isbn);
        
    }


    return 0;
}
