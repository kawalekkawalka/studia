#include <stdio.h>
int main(){
    int n, x;
    float suma = 0, a = 1;
    printf("Podaj dlugosc :");
    scanf("%d", &n);
    printf("Podaj x :");
    scanf("%d", &x);
    for(int i = 1; i <= n; i++){
        a = x * a;
        suma = suma + (1 / a);
    }
    printf("Suma to %.10f", suma);
    return 0;
}
