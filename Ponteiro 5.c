#include <stdio.h>

int main(){
    int num1 = 10;
    int *ptr = &num1;

    printf("%d\n", *ptr);
    printf("%d", ptr);

    return 0;
}
