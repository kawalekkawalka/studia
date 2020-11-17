#include <stdio.h>
#define W 4
#define K 4
#include <stdlib.h>
#include <time.h>

void wypeln(int tab[][K]){
   int i,j;
   for(i=0;i<W;i++){
      for(j=0;j<K;j++){
          tab[i][j] = rand() % 5 + 1;
          }
        }
}

int szukaj(int tab[]){
    int i, suma = 0;
    for(i=0;i<K;i++){
        suma = suma + tab[i];
    }
    return suma;
}

int main(){
    srand(time(NULL));
    int tab[W][K];
    wypeln(tab);
    int i,j;
    for(i=0;i<W;i++){
       for(j=0;j<K;j++){
          printf("%3d  ", tab[i][j]);
       }
       printf("\n");
    }
    int suma = 0, indeks = 0;
    for(i = 0;i<W;i++){
        if(suma < szukaj(tab[i])){
            suma = szukaj(tab[i]);
            indeks = i;
        }
    }

    printf("Suma tego wiersza to %d, a jego indeks to %d", suma, indeks);
    return 0;
}


