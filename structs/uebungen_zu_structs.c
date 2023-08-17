#include <stdio.h>
#include <string.h>

// Struktur für einen Artikel
struct Artikel {
    int artikelnummer;
    char bezeichnung[100];
    float preis;
    int bestand;
};

// Funktion, um einen neuen Artikel hinzuzufügen
void artikelHinzufuegen(struct Artikel artikel[], int *anzahlArtikel) {
    if (*anzahlArtikel < 100) {
        printf("Geben Sie die Artikelnummer ein: ");
        scanf("%d", &artikel[*anzahlArtikel].artikelnummer);
        printf("Geben Sie die Artikelbezeichnung ein: ");
        scanf("%s", artikel[*anzahlArtikel].bezeichnung);
        printf("Geben Sie den Artikelpreis ein: ");
        scanf("%f", &artikel[*anzahlArtikel].preis);
        printf("Geben Sie den Artikelbestand ein: ");
        scanf("%d", &artikel[*anzahlArtikel].bestand);
        (*anzahlArtikel)++;
        printf("Artikel wurde hinzugefügt.\n");
    } else {
        printf("Das Maximum an Artikeln wurde erreicht.\n");
    }
}

// Funktion, um alle Artikel auszugeben
void alleArtikelAusgeben(struct Artikel artikel[], int anzahlArtikel) {
    printf("Alle Artikel:\n");
    for (int i = 0; i < anzahlArtikel; i++) {
        printf("-------------------------------\n");
        printf("Artikelnummer: %d\n", artikel[i].artikelnummer);
        printf("Bezeichnung: %s\n", artikel[i].bezeichnung);
        printf("Preis: %.2f\n", artikel[i].preis);
        printf("Bestand: %d\n", artikel[i].bestand);
        printf("-------------------------------\n");
    }
}

// Funktion, um nach einem Artikel anhand der Artikelnummer zu suchen
void artikelSuchen(struct Artikel artikel[], int anzahlArtikel, int artikelnummer) {
    for (int i = 0; i < anzahlArtikel; i++) {
        if (artikel[i].artikelnummer == artikelnummer) {
            printf("Artikel gefunden:\n");
            printf("Artikelnummer: %d\n", artikel[i].artikelnummer);
            printf("Bezeichnung: %s\n", artikel[i].bezeichnung);
            printf("Preis: %.2f\n", artikel[i].preis);
            printf("Bestand: %d\n", artikel[i].bestand);
            return;
        }
    }
    printf("Artikel mit der angegebenen Artikelnummer wurde nicht gefunden.\n");
}

int main() {
    struct Artikel artikel[100];
    int anzahlArtikel = 0;
    int auswahl = 0;
    
    do {
        printf("\nMenue:\n");
        printf("1. Neuen Artikel hinzufuegen\n");
        printf("2. Alle Artikel ausgeben\n");
        printf("3. Artikel suchen\n");
        printf("4. Programm beenden\n");
        printf("Waehlen Sie eine Option: ");
        scanf("%d", &auswahl);
        
        switch (auswahl) {
            case 1:
                artikelHinzufuegen(artikel, &anzahlArtikel);
                break;
            case 2:
                alleArtikelAusgeben(artikel, anzahlArtikel);
                break;
            case 3:
                printf("Geben Sie die Artikelnummer des zu suchenden Artikels ein: ");
                int artikelnummer;
                scanf("%d", &artikelnummer);
                artikelSuchen(artikel, anzahlArtikel, artikelnummer);
                break;
            case 4:
                printf("Programm wird beendet.\n");
                break;
            default:
                printf("Ungueltige Auswahl. Bitte waehlen Sie erneut.\n");
        }
    } while (auswahl != 4);
    
    return 0;
}
