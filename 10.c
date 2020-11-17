#include <stdio.h>
#define W 8
#define K 2
#include <stdlib.h>
#include <time.h>

void wypeln(int tab[][K]){
   int i,j;
   for(i=0;i<W;i++){
      for(j=0;j<K;j++){
          tab[i][j] = rand() % 2 + 1;
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
    printf("Indeksy tych wierszy o sumie %d to: ", suma);
    for(i = indeks;i<W;i++){
        if(suma == szukaj(tab[i])){
            printf(" %d ", i);
        }
    }

    return 0;
}



