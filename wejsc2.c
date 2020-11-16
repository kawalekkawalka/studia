#include <stdio.h>
#define N1 10
#define N2 10
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int t1[N1], t2[N2], i;
    for(i=0; i < N1; i++){
        t1[i] = rand() % 20 + 1;
    }
    for(i=0; i < N2; i++){
        t2[i] = rand() % 20 + 1;
    }
    printf("Tablica 1 to: { ");
    for(i=0; i<N1; i++){
        printf("%d, ", t1[i]);
    }
    printf("}\n");
    printf("Tablica 2 to: { ");
    for(i=0; i<N2; i++){
        printf("%d, ", t2[i]);
    }
    printf("}\n");
    //sumowanie elementów tablic
    int t3[10];
    for(i=0; i<10;i++){
        t3[i] = t1[i] + t2[i];
    }
    printf("Tablica 3 to: { ");
    for(i=0; i<10; i++){
        printf("%d, ", t3[i]);
    }
    printf("}\n");

    return 0;
}
