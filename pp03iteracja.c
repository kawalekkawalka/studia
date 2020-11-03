#include <stdio.h>
int main(){
    int dlugosc, miejsce = 0;
    float x, max = 0;
    printf("Podaj dlugosc ciagu:");
    scanf("%d", &dlugosc);
    for(int i = 1; i <= dlugosc; i++){
        printf("Podaj wyraz ciagu:");
        scanf("%f", &x);
        if(x > max){
            max = x;
            miejsce = i;
        }

    }
    printf("Najwiekszy wyraz ciagu to %f, jest na %d miejscu ciagu", max, miejsce);
    return 0;
}
