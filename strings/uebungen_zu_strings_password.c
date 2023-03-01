#include <stdio.h>
#include <string.h>

int main(void) {

    char password[]="password01", eingabe[]="";
    int korrekt = 1, versuche = 0;

    while (korrekt != 0 && versuche != 3){
        printf("Bitte Password eingeben: ");
        gets(eingabe);
        korrekt = strcmp(password, eingabe);
        versuche++;
    }

    if(korrekt == 0 && versuche != 0) {
        printf("\nPassword korrekt!");
    } else {
        printf("Password Falsch");
    }
   
	printf("\n\n");

	system("pause");

	return 0;
}
