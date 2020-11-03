#include <stdio.h>
int main(){
    int n, i, j;
    char znak;
    printf("Podaj znak:");
    scanf("%c", &znak);
    printf("Podaj szerokosc drzewka (liczba nieparzysta):");
    scanf("%d", &n);
    for(i = 1; i <= n+1;i = i + 2){
        for(j = 1; j <= (n-i)/2;j++){
            printf("  ");
        }
        for(j = 1; j <= i;j++){
            printf("%c ", znak);
        }

        printf("\n");
    }
    return 0;
}
