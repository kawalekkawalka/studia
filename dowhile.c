#include <stdio.h>
int main(){
    int x, suma, licznik=0;
    do{
        licznik++;
        printf("Podaj liczbe: ");
        scanf("%d", &x);
        if(x%2==0){
            suma = suma + x;
        }

        printf("\nSuma dotychczasowych liczb parzystych to %d\n", suma);
    }while(suma <= 100);
    printf("\nPodales w sumie %d liczby\n", licznik);
    return 0;
}
