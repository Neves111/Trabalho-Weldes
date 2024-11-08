#include <stdio.h>

int incrementar(int *ptr){
        return ++(*ptr);
    }

int main(){
    int num = 0;

    printf("%d",incrementar(&num));

    return 0;
}
