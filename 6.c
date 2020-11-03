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
    printf("Podaj wartosc szukana w tablicy:");
    int wartosc;
    scanf("%d", &wartosc);
    for(i=0; i < N; i++){
        if(tab[i] == wartosc){
            printf("Podana wartosc znajduje sie w tablicy!!!");
            break;
        }

    }
    return 0;
}


