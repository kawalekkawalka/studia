#include <stdio.h>
#define W 4
#define K 4
#include <stdlib.h>
#include <time.h>

void wypeln(int tab[][K]){
   int i,j;
   for(i=0;i<W;i++){
      for(j=0;j<K;j++){
          tab[i][j] = rand() % 20 + 1;
          }
        }
}


void WspMax(int tab[][K], int *x, int *y){
    int i, j, maks=0;
    for(i = 0; i < W; i++){
        for(j=0;j<K;j++){
            if(tab[i][j] > maks){
                maks = tab[i][j];
                *x = i;
                *y = j;
            }
        }
    }
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
    int x,y;
    WspMax(tab, &x,&y);
    printf("%d  %d",x,y);

    return 0;
}


