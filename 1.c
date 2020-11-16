#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    srand(time(NULL));
    int tab[N], i;
    for(i=0; i < N; i++){
        tab[i] = rand() % 20 + 1;
    }

    for(i=0; i<N; i++){
        printf("Na %d miejscu w tablicy jest %d\n", i+1, tab[i]);
    }
    return 0;
}
