#include <stdio.h>

int main(){

int matriz[3][3] = {
    {1, 2, 3},
    {2, 4, 5},
    {3, 5, 6}
};
int tmatriz [3][3];

int i;
int j;

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        tmatriz[i][j] = matriz [j][i];
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        if (matriz[i][j] != tmatriz [i][j]){
            return printf("nao simetrica");
        }
    }
}
printf("simetrica");

return 0;
}
