#include <stdio.h>
int main(){
    int podstawa, i = 1, j = 1, spacje;
    char znak;

    printf("Podaj szerokosc podstawy:");
    scanf("%d", &podstawa);

    printf("Podaj znak:");
    fflush(stdin);
    scanf("%c", &znak);

    do{
        spacje = 1;
        j = 1;
        do{
            if(spacje < i){
                printf(" ");
               spacje++;
           }
            else{
                printf("%c ", znak);
            }
            j++;
        }while(j <= podstawa);
        i++;
        printf("\n");
    }while(i <= podstawa);

    return 0;
}
