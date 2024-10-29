#include <stdio.h>

int dig (int num){
  
    int aux = 0;

    do {
        ++aux;
        num /= 10;
    } while (num != 0);
    return aux;
}

int main (){

    int num;
    
    scanf("%d", &num);

    printf("%d", dig(num));

    return 0;
}
