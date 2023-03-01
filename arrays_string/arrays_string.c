#include <stdio.h>

int main() {

    char hallo[11] = {'H', 'a', 'l', 'l', 'o', ' ', 'W', 'e', 'l', 't', '!'};
    char temp;

    int n = strlen(hallo);

    printf("\n String: ");

    for(int i = 0; i < 11 ; i++) {
        printf(" %c ", hallo[i]);
    }
    printf("\n");

    for(int i = 0; i< n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (hallo[i] > hallo[j]) {
                temp = hallo[i];
                hallo[i] = hallo[j];
                hallo[j] = temp;
            }
        }
    }

    printf("\n String sortiert: ");

    for(int i = 0; i < 11 ; i++) {
        printf(" %c ", hallo[i]);
    }
    printf("\n");

    system("pause");

    return 0;
}