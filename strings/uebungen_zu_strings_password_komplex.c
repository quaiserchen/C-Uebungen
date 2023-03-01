#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    char eingabe[20] = "";
    int korrekt = 0, lc = 0, uc = 0, nmb = 0, sc = 0;

    while (korrekt == 0)
    {
        printf("Bitte Password eingeben: ");
        gets(eingabe);
        
        for (int i = 0; i < strlen(eingabe); i++)
        {
            if (isdigit(eingabe[i])) {
                nmb = 1;
            } else if (islower(eingabe[i])) {
                lc = 1;
            } else if (isupper(eingabe[i])) {
                uc = 1;
            } else {
                sc = 1;
            }
        }

        if (nmb == 1 && lc == 1 && uc == 1 && sc == 1)
        {
            korrekt = 1;
            printf("\nDas Password '%s' ist gueltig\n", eingabe);
        }
        else
        {
            nmb = 0;
            lc = 0;
            uc = 0;
            sc = 0;
            printf("\nPassword ungueltig!\n");
        }
    }

    printf("\n\n");

    system("pause");

    return 0;
}
