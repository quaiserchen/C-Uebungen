#include <stdio.h>

int main(void) {
    //das ist ein test kommentar

    char eingabe[100];

    printf("Bitte geben Sie einen Sting ein:");

    fgets(eingabe, 100, stdin);

    printf("\nDer eingegeben String lautet: %s", eingabe);

	
	printf("\n\n");

	system("pause");

	return 0;
}
