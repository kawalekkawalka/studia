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
        printf("%d, ", tab[i]);
    }
    printf("}\n");
    int suma = 0;
    for(i=0; i<N; i++){
        suma = suma + tab[i];
    }
    float srednia = (float)suma/N;
    int element;
    float roznica = (abs(tab[0] - srednia));
    for(i=0; i<N; i++){
        suma = suma + tab[i];
    }
    for(i=1; i<N; i++){
        if(abs(tab[i]-srednia) < roznica){
            roznica = abs(tab[i] - srednia);
            element = tab[i];
        }
    }
    printf("Srednia to %f najblizszy to: %d",srednia, element);
    return 0;
}


