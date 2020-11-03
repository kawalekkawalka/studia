#include <stdio.h>
int main() {
    float zmienna = 0, wiel = 0;
    scanf("%f", &zmienna);
    printf("%f", zmienna);
    for(int i = 0; i < 10; i++){
        wiel = zmienna * i;
        printf("%.f \n ", wiel);

    }

    return 0;
}
