#include <stdio.h>
int main(){
    int szukana = 8628, x = 0;
    while(szukana != x){
        printf("\nSzukamy pewnej liczby. Podaj liczbe calkowita:");
        scanf("%d", &x);
        if(x > szukana){
            printf("Szukana liczna jest mniejsza");
        }
        if(x < szukana){
            printf("Szukana liczna jest wieksza");
        }
    }
    printf("Brawo zgadles!!");
    return 0;
}
