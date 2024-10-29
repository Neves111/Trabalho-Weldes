#include <stdio.h>

float Celsius (float temp){
    return temp * 1.8 + 32;
}


float Fahrenheit (float temp){
    return (temp - 32) / 1.8;
} 

int main (){

    int a;
    float temp;

    printf("(1) Celsius\n(2) Fahrenheit\n");
    scanf("%d", &a);

    switch(a){
        case 1: 
        scanf("%f", &temp);
        printf ("%.2f", Celsius(temp));
        break;

        case 2:
        scanf("%f", &temp);
        printf ("%.2f", Fahrenheit(temp));
        break;
    }


    return 0;
}
