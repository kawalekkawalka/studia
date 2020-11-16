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
    printf("}");
    int minimum = tab[0], maksimum = tab[0];
    for(i=1; i<N; i++){
        if(tab[i] > maksimum){
            maksimum = tab[i];
        }
        else if(tab[i] < minimum){
            minimum = tab[i];
        }


    }
    printf("Maksimum to %d, a minimum to %d", maksimum, minimum);
    return 0;
}

