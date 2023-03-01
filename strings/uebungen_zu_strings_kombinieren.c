#include <stdio.h>
#include <string.h>

int main(void) {

    char sVorname[20], sNachname[20], sName[40]={};

    printf("Bitte geben Sie ihren Vornamen ein: ");

    gets(sVorname);

    printf("Bitte geben Sie ihren Nachnamen ein: ");

    gets(sNachname);

    strcat(sName, sVorname);
    strcat(sName, " ");
    strcat(sName, sNachname);

    printf("Ihr eingegebene Name lautet: %s", sName);

	
	printf("\n\n");

	system("pause");

	return 0;
}
