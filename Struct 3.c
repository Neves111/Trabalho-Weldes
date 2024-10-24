#include <stdio.h>

struct Funcionario {
    char nome [50];
    int idade;
    float salario;
    char cargo [50];
};

int main (){

    

    struct Funcionario funcionario[3];
    int maior = 0;

    for(int i = 0; i < 3; i++){
        
        printf("\nInformacoes funcionario %d\n", i + 1);
    
        printf("Nome: ");
        scanf("%s", funcionario[i].nome);
    
        printf("Idade: ");
        scanf("%d", &funcionario[i].idade);

        printf("Salario: ");
        scanf("%f", &funcionario[i].salario);

        printf("Cargo: ");
        scanf("%s", funcionario[i].cargo);

        if(funcionario[i].salario > funcionario[maior].salario){
            maior = i;
        }
    }

    printf("\nFuncionario de maior salario\n");

    printf("Nome: %s\n", funcionario[maior].nome);
    printf("Idade: %d\n", funcionario[maior].idade);
    printf("Salario: %.2f\n", funcionario[maior].salario);
    printf("Cargo: %s\n", funcionario[maior].cargo);

    return 0;
}
