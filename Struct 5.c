#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main (){

    struct Data data;
    int final[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Dia: ");
    scanf("%d", &data.dia);
    printf("Mes: ");
    scanf("%d", &data.mes);
    printf("Ano: "); 
    scanf("%d", &data.ano);

    if(data.ano % 4 == 0){
        final[2] = 29;
    }

    if(data.mes > 12){
          return printf("Data invalida");
    }

     if (data.dia < 1 || data.dia > final[data.mes]) {
        return printf("Data invalida");
    }

    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    return 0;
}
