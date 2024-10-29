#include <stdio.h>

int dig (int num){
  
    int aux = 0;

    while (num != 0) {      
        num /= 10;   
        aux++;
    }
    return aux;
}

int main (){

    int num;
    
    scanf("%d", &num);

    printf("%d", dig(num));

    return 0;
}
