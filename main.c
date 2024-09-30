#include<stdio.h>
int main() {
    int lato1, lato2, lato3;
    printf("Inseririre le misure dei 3 lati per determinare se il triangolo è scaleno, isoscele o equilatero\nlato1: ");
    scanf("%d", &lato1);
    printf("Lato 2: ");
    scanf("%d", &lato2);
    printf("Lato 3: ");
    scanf("%d", &lato3);
    if(lato1 == lato2 && lato3 == lato1) {
        printf("Il triangolo è equilatero");
    }else{
        printf("Il triangolo è isoscile");
    }if(lato1 == lato3 && lato2 == lato3) {
        printf("Il triangolo è isoscile");
    }else {
        printf("Il triangolo è scaleno");
    }
}