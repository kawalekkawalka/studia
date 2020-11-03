#include <stdio.h>
int main(){
    int i = 1, j = 1;
    while(i <= 30){
        j = 1;
        printf("\n1");
        while(j <= i){
            printf("0");
            j++;
        }
        i++;
    }

    return 0;
}
