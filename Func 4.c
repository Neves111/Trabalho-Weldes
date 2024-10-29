#include <stdio.h>

int Maior (int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main (){

    int a;
    int b;

    scanf("%d %d", &a ,&b);

    printf("%d", Maior(a,b));


    return 0;
}
