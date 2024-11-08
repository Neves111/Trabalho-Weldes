#include <stdio.h>

int trocar(int *ptr, int *ptr2){
    int num1 = *ptr2;
    *ptr2 = *ptr;
    *ptr = num1;

    printf("Depois %d %d", *ptr, *ptr2);
    
    return 0;
}

int main(){
    int num1 = 1;
    int num2 = 2;

    printf("Antes %d %d\n", num1, num2);

    trocar(&num1, &num2);

    return 0;
}
