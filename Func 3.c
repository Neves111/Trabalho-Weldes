#include <stdio.h>

float Media (int a, int b, int c){
    return (a + b + c)/3;
}



int main (){

    float a;
    float b;
    float c;

    scanf("%f %f %f", &a ,&b ,&c);

    printf("%.2f", Media(a,b,c));


    return 0;
}
