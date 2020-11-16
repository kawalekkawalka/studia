#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int N = 0;
    do{
        printf("Podaj dodatnia wielkosc tablicy:");
        scanf("%d", &N);
    }while(N<=0);

    int tab[N], i;
    for(i=0; i < N; i++){
        tab[i] = rand() % 20 + 1;
    }

    for(i=0; i<N; i++){
        printf("Na %d miejscu w tablicy jest %d\n", i+1, tab[i]);
    }
    return 0;
}
