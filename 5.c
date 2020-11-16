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
    printf("Tablica to: { ");
    for(i=0; i<N; i++){
        printf("%3d, ", tab[i]);
    }
    printf("}\n");
    int bufor;
    for(i = 0; i < N/2; i++){
        bufor = tab[i];
        tab[i] = tab[N-i-1];
        tab[N-1-i] = bufor;
    }
    printf("Tablica to: { ");
    for(i=0; i<N; i++){
        printf("%3d, ", tab[i]);
    }
    printf("}\n");
    return 0;
}

