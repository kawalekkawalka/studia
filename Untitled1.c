#include <stdio.h>
int main(){
    int i, j, bufor;
    for(i = 1; i < 11; i++){
        for(j = 1; j < 11; j++){
            bufor = i * j;
            printf("%2d  ", bufor);
        }
        printf("\n");
    }


    return 0;
}
