#include <stdio.h>

int main(){

    int ean_code[13] = {4, 0, 1, 2, 3, 4, 5, 9, 8, 7, 6, 5, 2};
    int summe1 = 0, summe2 = 0, summe = 0, naechsteZehner = 0, tempsumme = 0;

    printf("Bitte EAN eingeben: ");

    /*
    for(int i = 0; i < 13; i++){
        scanf("%d", &ean_code[i]);
    }
    printf("\n\n"); */

    //summe1
    for(int i = 0; i < 11; i=i+2){
        summe1 = ean_code[i] + summe1;
    }

    //summe2
    for(int i = 1; i < 12; i=i+2){
        summe2 = ean_code[i] + summe2;
    }
    summe = summe2 * 3 + summe1;
    tempsumme = summe;

    while(naechsteZehner == 0){
        if(tempsumme % 10 == 0){
            naechsteZehner = 1;
        }else{
            tempsumme++;
        }
    }

    for(int i = 0; i < 13; i++){
        printf( "%d", ean_code[i]);
        if(i == 1){
            printf(" ");
        }
        if(i == 6){
            printf(" ");
        }
    }
    printf("\n\n");

    if(tempsumme-summe == ean_code[12]){
        printf("Der EAN-Code ist gueltig\n\n");
    }else{
        printf("PEEEEEEEEEEEEEEEEP\n\n");
    }

    //printf("summe1=%d\nsumme2=%d\nsumme=%d\ntempsumme=%d\n\n", summe1, summe2, summe, tempsumme);

    system ("pause");
    return 0;
}